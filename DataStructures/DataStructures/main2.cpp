#include <iostream>
#include "Stack.h"

int main2()
{
	Stack* s = new Stack;
	initStack(s);
	push(s, 1);
	push(s, 2);
	push(s, 3);
	printStack(s);
	pop(s);
	pop(s);
	printStack(s);
	return 0;
}