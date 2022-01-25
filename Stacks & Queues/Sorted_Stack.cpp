#include <iostream>
#include "Stack.hpp"

template<typename T>
Stack<T> sorted_Stack(Stack<T> &st)
{
    Stack<T> tmpStack;
    while (!st.isEmpty()){
        T tmp = st.peek();
        st.pop();
 
    while (!tmpStack.isEmpty() && tmpStack.peek() < tmp){
            st.push(tmpStack.peek());
            tmpStack.pop();
        }
 
        tmpStack.push(tmp);
    }
 
    return tmpStack;
}

int main(){
    Stack<int> st;
    st.push(15);
    st.push(16);
    st.push(17);
    st.push(18);
    Stack<int> tmpSt = sorted_Stack(st);
    while(!tmpSt.isEmpty()){
        std::cout << tmpSt.peek() << " ";
        tmpSt.pop();
    }
}