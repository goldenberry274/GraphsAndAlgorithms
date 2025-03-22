//
// Created by eitan on 3/21/25.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H


class Node{
  public:
    int node_number;
    int weight;
    Node* next;

    Node(int new_node_number){
        node_number = new_node_number;
        next = nullptr;
    }

    Node(int new_node_number, int new_weight) {
        node_number = new_node_number;
        weight = new_weight;
        next = nullptr;
    }

    Node(int new_node_number, int new_weight, Node* new_next) {
        node_number = new_node_number;
        weight = new_weight;
        next = new_next;
    }

};
class LinkedList {
    Node* head;
public:

    LinkedList();
    LinkedList(int first_vertex);
    void print_list();
    void addVertex(int new_vertex);
    void addVertex(int new_vertex, int new_weight);
    bool removeVertex(int remove_this);
    ~LinkedList();

};



#endif //LINKEDLIST_H
