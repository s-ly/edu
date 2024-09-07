#include <ncurses.h>
#include <stdio.h>

void draw(WINDOW *win);

int main() {
  initscr();
  curs_set(0);
  cbreak();
  noecho();

  WINDOW *win = newwin(10, 10, 0, 0);
  //   refresh();

  if (win == NULL) {
    perror("Ошибка при создании окна");
    endwin();
    return 1;
  }

  keypad(win, true);
  //   nodelay(win, true);
  draw(win);
  wgetch(win);
  endwin();
  printf("---\n");
  return 0;
}

void draw(WINDOW *win) {
  wclear(win);  // Очистка окна перед отрисовкой
  mvwprintw(win, 1, 1, "ok");
  wrefresh(win);
}