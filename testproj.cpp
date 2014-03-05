//Test project. 
#include <iostream>
#include "summBN.hpp"

int main()
{
	unsigned long long a, b;			//От 0 до 18 446 744 073 709 551 615 
	a = 18446744073709551613U;
	b = 1;
	std::cout << Integ::summ(a,b) << std::endl << sizeof(long long) << std::endl;
	
	return 0;

}