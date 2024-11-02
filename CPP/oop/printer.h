#ifndef PRINTER_H
#define PRINTER_H

class Printer {
 public:
  void PrintNum();
  void SetNum(int number);
  int GetNum();

 private:
  int num;
};

#endif  // PRINTER_H