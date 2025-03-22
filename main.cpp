#include <iostream>
#include "Graph.h"
#include "LinkedList.h"
using namespace graph;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    try {
        Graph g(5);
        printf("Basic graph before modification: \n");
        g.print_graph();

        g.addEdge(0,1,4);
        printf("Graph modified, added edges 0,1 and 1,0 (The same edge) with weight 4: \n");

        g.print_graph();

        g.removeEdge(0,1);
        printf("Removed edges 0,1 and 1,0 (The same edge)\n");
        g.print_graph();
        printf("This command is supposed to cause an exception due to a nonexistent edge \n");
        g.removeEdge(0,1);

    } catch (const char* exception) {
        printf("Excpetion: %s \n", exception);
        printf("Invalid arguments given");
    }



    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the
    // <b>lang</b> variable name to see how CLion can help you rename it.

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.