// #include <iostream>
// #include <stack>
 
// using namespace std;
 
// void showstack(stack <int> gq)
// {
//     stack <int> g = gq;
//     while (!g.empty())
//     {
//         cout << '\t' << g.top();
//         g.pop();
//     }
//     cout << '\n';
// }
 
// int main ()
// {
//     stack <int> gquiz;
//     gquiz.push(10);
//     gquiz.push(30);
//     gquiz.push(20);
//     gquiz.push(5);
//     gquiz.push(1);
 
//     cout << "The stack gquiz is : ";
//     showstack(gquiz);
 
//     cout << "\ngquiz.size() : " << gquiz.size();
//     cout << "\ngquiz.top() : " << gquiz.top();
 
 
//     cout << "\ngquiz.pop() : ";
//     gquiz.pop();
//     showstack(gquiz);
 
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
 
#define MAX 1000
 
class Stack
{
    int top;
public:
    int a[MAX];    //Maximum size of Stack
 
    Stack()  { top = -1; }
    bool push(int x);
    int pop();
    bool isEmpty();
};
 
bool Stack::push(int x)
{
    if (top >= MAX)
    {
        cout << "Stack Overflow";
        return false;
    }
    else
    {
        a[++top] = x;
        return true;
    }
}
 
int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}
 
bool Stack::isEmpty()
{
    return (top < 0);
}
 
// Driver program to test above functions
int main()
{
    struct Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
 
    cout << s.pop() << " Popped from stack\n";
 
    return 0;
}