#include "func.h"

Arr::Arr() {
  size = SIZE_DEFAULT;
  data = new int[size];
}

Arr::Arr(int size) : size(size) { data = new int[size]; }

Arr::Arr(const Arr& other) {
  size = other.size;
  data = new int[size];
  for (int i = 0; i < size; i++) {
    data[i] = other.data[i];
  }
}

Arr::~Arr() { delete[] data; }

void Arr::arrPrint() {
  for (int i = 0; i < size; i++) {
    std::cout << data + i << " " << data[i] << std::endl;
  }
  std::cout << "" << std::endl;
}

void Arr::arrAdd(int cell) {
  int addCell = cell;
  int currentSize = size;
  int newSize = size + addCell;

  Arr tempArr(*this);

  delete[] data;
  data = new int[newSize];
  size = newSize;

  // copy old data in new array
  for (int i = 0; i < currentSize; i++) {
    data[i] = tempArr.data[i];
  }
}