#include "Utils.h"
#include "Stack.h"
#define MAX_NUMS 10
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