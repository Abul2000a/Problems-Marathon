#include <iostream>
#include "Stack.h"

template<typename T>
Stack<T>::Stack(){
    top = -1;
}
template<typename T>
void Stack<T>::push(T data){
    if(top > MAX - 1){
        std::cout << "Stack Overflow";
    }
    else{
        stack[++top] = data;
    }
}
template<typename T>
int Stack<T>::pop(){
    if(top < 0){
        std::cout << "Stack Underflow";
    }
    else{
        T tmp = stack[top--];
        return tmp;
    }
}

template<typename T>
bool Stack<T>::isEmpty(){
    return (top < 0);
}

template<typename T>
T Stack<T>::peek(){
    if (top < 0) {
        std::cout << "Stack is Empty";
        return 0;
    }
     int tmp = s.peek();
        s.pop();
        if (tmp < min)
        {
            min = 2*min - tmp;
        }
        else
            min = tmp;
    T tmp = stack[top];
    return tmp;
}
