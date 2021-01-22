#include <iostream>

int main()
{	
	std::cout << "对-100到+100求和，输出为0" << std::endl;
	int sum = 0;
	for (int i = -100; i <= 100; ++i)
		sum += i;
	std::cout << sum << std::endl;
	return 0;
}
