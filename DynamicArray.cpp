//
// Created by eitan on 3/23/25.
//

#include "DynamicArray.h"

DynamicArray::DynamicArray(size_t size){
  if (size == 0)
    throw "Invalid argument";
  array = new int[size];
  last_element = array - 1;
  array_size = size;
}

int DynamicArray::get_element(size_t index){
  int difference = (last_element - array) ;

  if (index >= array_size || index > difference)
    throw "Invalid argument";

  return array[index];
}

void DynamicArray::resize(){
  int* new_array = new int[ array_size * 2];
  int* tmp = array;
  last_element = new_array;
  for (int i = 0; i < array_size; i++){
    new_array[i] = tmp[i];
    last_element++;
  }
  array_size *= 2;
  array = new_array;

}
bool DynamicArray::set_element(int new_elem){
  if (last_element == array - 1){
    last_element = &array[0];
    *last_element = new_elem;
    return true;
  }

  int difference = (last_element - array) / 4;

  if (difference >= array_size - 1){
    resize();
  }

  last_element++;
  *last_element = new_elem;

  return true;
}

DynamicArray::~DynamicArray(){
  delete array;
}
