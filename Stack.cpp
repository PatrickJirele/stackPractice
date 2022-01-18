#include "Stack.h"
#include <iostream>
using namespace std;

// define the functions

Stack::Stack()
{
	count = 0;
}

void Stack::push(int ch)
{	
	// pre condition: stack is not full
	// post condition: element is added to stack
	if (count < MAX)
	{
		workSpace[count] = ch;
		count++;
	}
	else
	{
		cout << "ERROR: push - stack is full" << endl;
		exit(EXIT_FAILURE);
	}
} // end push

int Stack::pop(){
	if (!empty()){
		int v = workSpace[count - 1];
		count--;
		if (v >= 6)
			return v;
	}
} // end pop

bool Stack::empty(){
	return count == 0;
} // end empty

bool Stack::full()
{
	return count == MAX;

} // end full
