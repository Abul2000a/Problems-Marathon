#include "Queue_with_Stacks.hpp"

int main(){
	MyQueue<int> q;
	q.enQueue(15);
	q.enQueue(25);
	q.enQueue(36);

	std::cout << q.deQueue() << std::endl;
	std::cout << q.deQueue() << std::endl;
	std::cout << q.deQueue() << std::endl;

	return 0;
}
