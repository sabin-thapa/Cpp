#include <iostream>
#include "infixToPostfix.h"

using namespace std;

Stack::Stack()
{
	top = -1;
}

Stack::~Stack(){};

void Stack::push(char element)
{
	if (top >= MAX_STACK_SIZE - 1)
	{
		cout << "Cannot Push" << element << ".Stack is full" << endl;
	}
	else
	{
		top++;
		this->elements[top] = element;
	}
}

char Stack::pop()
{
	if (top < 0)
	{
		return 0;
	}
	else
	{

		return this->elements[top--];
	}
}

char Stack::peak()
{
	if (top < 0)
	{
		return 0;
	}
	else
	{
		return this->elements[top];
	}
}

bool Stack::isEmpty()
{
	if (top < 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

