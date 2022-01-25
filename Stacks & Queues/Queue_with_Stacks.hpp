#include "Queue_with_Stacks.h"

template<typename T>
void MyQueue<T>::enQueue(T data){
		while (!st_1.empty()){
			st_2.push(st_1.top());
			st_1.pop();
		}
		st_1.push(data);

		while (!st_2.empty()){
			st_1.push(st_2.top());
			st_2.pop();
	    }
}

template<typename T>
int MyQueue<T>::deQueue(){
		if (st_1.empty()){
			std::cout << "Queue is Empty";
            return 0;
		}
		int tmp = st_1.top();
		st_1.pop();
		return tmp;
}