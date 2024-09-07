#include "func.h"

Arr2D::Arr2D() : _rows(SIZE_DEFAULT), _cols(SIZE_DEFAULT) {
    _data = new int*[_rows];
    _data[0] = new int[_cols];
    _data[0][0] = 0;
}

Arr2D::Arr2D(int rows, int cols): _rows(rows), _cols(cols){
    _data = new int*[_rows];

}

void Arr2D::Arr2DPrint(){
    // исправить для общего вида
    std::cout << _data[0][0] <<std::endl;
}