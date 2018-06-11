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


void List::DeleteNode(int delData){
    nodePointer delPtr = NULL;
    temp = header;
    current = header;
    while(current != NULL && current->data != delData){
        temp = current;
        current = current->next;
    }
    if(current==NULL) {
        cout<<delData<<" not in list\n";
        delete delPtr;

    }else{
        delPtr = current;
        current = current->next;
        temp->next = current;
        delete delPtr;
        cout <<"The value "<< delData << "was deleted\n";

    }
}


void List::PrintList() {
    current = header;
    while(current != NULL){
        cout<<current->data<<endl;
        current = current->next;
    }
}