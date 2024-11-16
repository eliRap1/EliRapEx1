#include "Utils.h"
#include "Stack.h"
#define MAX_NUMS 10

/*
* this func reverse an arr using the stack
* input: arr of nums to changes, the size of the arr
* output: the arr reversed
*/
void reverse(int* nums, unsigned int size)
{
	int i = 0;
	Stack* s = new Stack();
	initStack(s);
	for (i = 0; i < size; i++)
	{
		push(s, nums[i]);
	}
	for (i = 0; i < size; i++)
	{
		nums[i] = pop(s);
	}
	cleanStack(s);
}

/*
this func gets an arr of 10 nums from the user and reverses it
input: none
output: the arr reversed
*/
int* reverse10()
{
	int i = 0;
	int* nums = new int[MAX_NUMS];
	for (i = 0; i < MAX_NUMS; i++)
	{
		std::cin >> nums[i];
	}
	reverse(nums, MAX_NUMS);
	return nums;
}