//
// Created by eitan on 3/23/25.
//
#include <stdio.h>
#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H



class DynamicArray {
protected:
    int* array;
    int* last_element;
    size_t array_size;
    void resize();
public:
  DynamicArray(size_t size = 5);
  int get_element(size_t index);
  bool set_element(int new_elem);
  ~DynamicArray();
};




#endif //DYNAMICARRAY_H
