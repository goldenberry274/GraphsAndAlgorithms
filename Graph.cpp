//
// Created by eitan on 3/21/25.
//
#include "Graph.h"
using namespace graph;

Graph::Graph(size_t new_vatrices_num) : vatrices_num ( new_vatrices_num), edge_lists (nullptr)

{
    if (0 == vatrices_num)
        throw "Invalid Argument";

    edge_lists = new LinkedList * [vatrices_num];

    for (int i = 0; i < vatrices_num; i++) {
        edge_lists[i] = new LinkedList(i);
    }
    
}

bool Graph::addEdge(int src, int dst, int weight) {
    if (src >= vatrices_num || src < 0 || dst >= vatrices_num || dst < 0)
        return false;

    edge_lists[src]->addVertex(dst, weight);
    edge_lists[dst]->addVertex(src, weight);
    return true;
}

void Graph::removeEdge(int src, int dst) {
    if (src >= vatrices_num || src < 0 || dst >= vatrices_num || dst < 0)
        throw "Invalid argument";
    if (src == dst)
        throw "Invalid argument";

    if (!edge_lists[src]->removeVertex(dst) || !edge_lists[dst]->removeVertex(src)) {
        throw "Nonexistent edge";
    }

}


void Graph::print_graph() {
    for (int i = 0; i < vatrices_num; i++) {
        printf("Adjacency list of vertex %d: ", i);
        edge_lists[i]->print_list();
    }
}
Graph::~Graph() {
    for (int i = 0; i < vatrices_num; i++) {
        delete edge_lists[i];
    }
    delete[] edge_lists;
}
