#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
    cout << "stacks are last in first out data structures (L.I.F.O.)" << endl;
    cout << "push - insert (is a void function)" << endl;
    cout << "pop - remove (will return a value)" << endl;
    cout << "Store these elements in an array" << endl; 

    Stack s = Stack();
    s.push(3);
    s.push(8);
    s.push(7);
    s.push(4);
    s.push(9);

    cout << endl << endl;

    int v = s.pop();
    cout << v << endl;
    v = s.pop();
    cout << v << endl;
    v = s.pop();
    cout << v << endl;
    v = s.pop();
    cout << v << endl;
    v = s.pop();
    cout << v << endl;

}


