#ifndef __FUNC_H__
#define __FUNC_H__

#include <iostream>

class Arr {
 private:
  const int SIZE_DEFAULT = 1;
  int* data;
  int size;

 public:
  Arr();
  Arr(int size);
  ~Arr();

  // Конструктор копирования
  Arr(const Arr& other);

  void arrPrint();

  // Увеличивает размер массива
  void arrAdd(int cell);
};

class Arr2D {
 private:
  const int SIZE_DEFAULT = 1;
  int _rows;
  int _cols;
  int** _data;

 public:
  Arr2D();
  Arr2D(int rows, int cols);
  void Arr2DPrint();
};

#endif