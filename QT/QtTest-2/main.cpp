#include <QtWidgets>
#include <fstream>
#include <string>

class FireReader {
 public:
  std::string readFile(const std::string &filename) {
    std::ifstream file(filename);
    std::string text;

    if (file.is_open()) {
      std::string line;
      while (std::getline(file, line)) {
        text += line + "\n";
      }
      file.close();
    } else {
      text = "file no open";
    }
    return text;
  }
};

// Объявляем функцию-слот
// void changeText(QLabel *label) { label->setText("Button Clicked!"); }

int main(int argc, char **argv) {
  QApplication app(argc, argv);

  QWidget win;
  win.resize(400, 300);

  QLabel leb("Hello, World!", &win);
  leb.move(10, 10);

  QPushButton but("Click Me", &win);
  but.move(10, 40);

  FireReader fileReader;

  // Соединяем сигнал clicked() кнопки со слотом changeText
  QObject::connect(&but, &QPushButton::clicked, [&leb, &fileReader]() {
    // changeText(&leb);
    std::string text = fileReader.readFile("text.txt");
    leb.setText(QString::fromStdString(text));
  });

  win.show();
  return app.exec();
}