#include <iostream>
#include <stack>

template<typename T>
class MyQueue{
private:
	std::stack<T> st_1;
    std::stack<T> st_2;
public:
	void enQueue(T);
	int deQueue();
};