//
// Created by eitan on 3/21/25.
//
#include "LinkedList.h"
#include <stdio.h>
#ifndef GRAPH_H
#define GRAPH_H

namespace graph{
    //Class Graph is undirected, meaning any edge from vertex a to b is also an edge from vertex b to a
    class Graph {

    protected:
        const size_t vatrices_num;
        LinkedList** edge_lists;

    public:

        //Throws exception if argument is invalid (0)
        Graph(size_t new_vatrices_num);
        //Adds an edge from node src to node dst with the weight "weight"
        bool addEdge(int src, int dst, int weight = 1);
        //Removes the edge no.src to no.dst and vice versa
        void removeEdge(int src, int dst);
        //Prints the graph
        void print_graph();
        ~Graph();


    };

}



#endif //GRAPH_H
