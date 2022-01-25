#include <iostream>
#include <stack>

template<typename T>
class Stack
{   
private: 
    std::stack<T> st;
	T min;
public:
	void getMin();
	void peek();
	void pop();
	void push(T data);
};