#pragma once

// prototypes on .h file

const int MAX = 10;

class Stack
{
	private:
		int workSpace[MAX];
		int count;
	public:
		Stack();
		void push(int);
		int pop();
		bool empty();
		bool full();
};

