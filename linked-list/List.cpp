#include <cstdlib>
#include <iostream>

#include "List.h"

using namespace std;

List::List() {
    header = NULL;
    current = NULL;
    temp = NULL;
}

void List::append(int c) {
    nodePointer n = new node;
    n->next = NULL;  //Find the node n is pointing to and access its  
                    //next element and make that point to nothing
    n->data = c;  //Whatever we passed will going to be holded by data

    if(header != NULL) {
        current = header; //If head is not null then current pointer will be 
                        //pointing  to same thing that header pointer is pointing to.
        while(current->next != NULL){
            current = current->next;
        }
        current->next = n;
    } else {
        header = n;
    }

}

