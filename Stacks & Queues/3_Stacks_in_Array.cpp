#include "3_Stacks_in_Array.hpp"

int main()
{
	int k = 3, n = 10;
	kStacks ks(k, n);

	ks.push(15, 2);
	ks.push(45, 2);

	ks.push(17, 1);
	ks.push(49, 1);
	ks.push(39, 1);

	ks.push(11, 0);
	ks.push(9, 0);
	ks.push(7, 0);

	std::cout << ks.pop(2) << std::endl;
	std::cout << ks.pop(1) << std::endl;
	std::cout << ks.pop(0) << std::endl;

	return 0;
}
