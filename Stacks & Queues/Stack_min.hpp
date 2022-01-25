#include "Stack_min.h"

template<typename T>
void Stack<T>::getMin(){
		if(st.empty())
			std::cout << "Stack is empty";
		else
			std::cout <<"Minimum Element of stack is: " << min << std::endl;
}

template<typename T>
void Stack<T>::peek(){
		if (st.empty()){
			std::cout << "Stack is empty ";
			return;
		}
		int tmp = st.top();
		if(tmp < min)
            std::cout << min;
        else
            std::cout << tmp;
}

template<typename T>
void Stack<T>::pop(){
		if (st.empty())
		{
			std::cout << "Stack is empty";
			return;
		}

		int tmp = st.top();
		st.pop();

		if (tmp < min)
		{
			std::cout << min << "\n";
			min= 2*min - tmp;
		}

		else
			std::cout << tmp << "\n";
}

template<typename T>
void Stack<T>::push(T data)
	{
		if (st.empty())
		{
			min = data;
			st.push(data);
			return;
		}

		else if (data < min)
		{
			st.push(2*data - min);
			min = data;
		}

		else
		st.push(data);
	}