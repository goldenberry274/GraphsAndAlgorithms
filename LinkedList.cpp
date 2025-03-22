//
// Created by eitan on 3/21/25.
//

#include "LinkedList.h"
#include <stdio.h>
LinkedList::LinkedList(){
  head = nullptr;
}

LinkedList::LinkedList(int first_vertex) {
  int weight_to_self = 0;
  head = new Node(first_vertex, weight_to_self);
}


void LinkedList::addVertex(int new_vertex){

  if (nullptr == head){
    head = new Node(new_vertex);
    return;
  }

  Node* added_node = new Node(new_vertex);
  Node* tmpPointer = head;

  while (nullptr != tmpPointer->next){
    tmpPointer = tmpPointer->next;
  }

  tmpPointer->next = added_node;
}

void LinkedList::addVertex(int new_vertex, int new_weight) {
  if (nullptr == head){
    head = new Node(new_vertex);
    return;
  }

  Node* added_node = new Node(new_vertex, new_weight);
  Node* tmpPointer = head;

  while (nullptr != tmpPointer->next){
    tmpPointer = tmpPointer->next;
  }

  tmpPointer->next = added_node;
}


bool LinkedList::removeVertex(int remove_this){
  Node* current = head;
  Node* prev = nullptr;

  while (current) {
    if (current->node_number == remove_this) {
      if (prev) {
        prev->next = current->next; // Bypass the node
      } else {
        head = current->next; // Remove head node
      }
      delete current;
      printf("Removed vertex %d\n", remove_this);
      return true;
    }
    prev = current;
    current = current->next;
  }
  return false;

}

void LinkedList::print_list() {
  Node* temp = head;
  while (temp) {
    printf("(Vertex: %d, Weight of Edge: %d) -> ", temp->node_number, temp->weight);
    temp = temp->next;
  }
  printf("NULL\n");
}
LinkedList::~LinkedList() {
  delete[] head;
}
