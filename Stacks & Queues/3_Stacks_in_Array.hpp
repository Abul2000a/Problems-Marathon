#include "3_Stacks_in_Array.h"

kStacks::kStacks(int k1, int n1){
	k = k1, n = n1;
	arr = new int[n];
	top = new int[k];
	next = new int[n];

	for (int i = 0; i < k; i++)
		top[i] = -1;
	free = 0;
	for (int i=0; i<n-1; i++)
		next[i] = i+1;
	next[n-1] = -1; 
}

void kStacks::push(int item, int sn)
{
	if (isFull())
	{
		std::cout << "Stack Overflow";
		return;
	}

	int i = free;	
	free = next[i];

	next[i] = top[sn];
	top[sn] = i;

	arr[i] = item;
}

int kStacks::pop(int sn)
{
	if (isEmpty(sn))
	{
		std::cout << "Stack Underflow";
		return 0;
	}

	int i = top[sn];
	top[sn] = next[i]; 
	next[i] = free;
	free = i;

	return arr[i];
}
