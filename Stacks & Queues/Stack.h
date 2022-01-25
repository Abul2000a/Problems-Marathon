#define MAX 1000

template<typename T>
class Stack{
    private:
        int min;
        int top;
    public:
        T stack[MAX];
        Stack();
        bool isEmpty();
        void push(T);
        int pop();
        T peek();
};