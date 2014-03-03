#include <iostream>

int main()
{
	unsigned long long a, b;			//От 0 до 18 446 744 073 709 551 615 
	a = 18446744073709551614;
	b = 1000000000000000000;
	std::cout << a+b << std::endl;
	
	return 0;

}