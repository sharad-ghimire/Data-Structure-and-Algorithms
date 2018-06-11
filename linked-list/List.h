#ifndef LIST_H
#define LIST_H

class List{
private:
   typedef struct node {
        int data;
        node* next;
    }* nodePointer ;

    nodePointer header;
    nodePointer current;
    nodePointer temp;


public:
    List();
     ~List ();
     bool isEmpty();
     void prepend(int c);
     void append(int c);
     int head();
     List tail();
     void DeleteNode(int delData);
     void PrintList();
};

#endif   /*LIST_H*/
