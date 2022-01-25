#include "Stack.hpp"
#define MAX 1000

int main(){
    Stack<int> stack;
    stack.push(15);
    stack.push(25);
    stack.pop();
    stack.push(28);
    stack.push(16);
    std::cout << stack.getMin();
    std::cout << stack.peek(); 
    while(!stack.isEmpty()){
        std::cout << stack.peek() << " ";
        stack.pop();
    }
    return 0;
}