#ifndef LIST_H
#define LIST_H

class List{
private:
   typedef struct node {
        int data;
        node* next;
    }* nodePointer ;

    nodePointer head;
    nodePointer curr;
    nodePointer temp;


public:
    virtual ~List ();
    virtual bool isEmpty() = 0;
    virtual void prepend(int c) = 0;
    virtual void append(int c) = 0;
    virtual int head() = 0;
    virtual List tail() = 0;

    // void AddNode(int addData);
    // void DeleteNode(int delData);
    // void PrintList();
};

#endif   /*LIST_H*/
