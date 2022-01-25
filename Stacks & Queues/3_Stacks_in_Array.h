#include <iostream>

class kStacks
{
private:
	int *arr;
	int *top;
	int *next; 
	int n, k;
	int free; 
public:
	kStacks(int k, int n);
	bool isFull() { return (free == -1);}
	void push(int item, int sn);
	int pop(int sn);
	bool isEmpty(int sn){return (top[sn] == -1);}
};