#include <iostream>

int main()
{	
	int sum = 0;
	for (int i=50; i<=100; ++i)
		sum += i;
	std::cout << "The sum of 50 to 100 inclusive is: " << sum << std::endl;

	std::cout << "integers between 10 and 0: " << std::endl;
	for (int i=10; i>=0; --i)
		std::cout << i << std::endl;

	int a=0,b=0;
        std::cout << "please enter two numbers:" << std::endl;
        std::cin >> a >> b;
	std::cout << "integers between " << a << " and " << b  << " : " << std::endl;	
	for (int i=a; i<=b; ++i)
		std::cout << i << std::endl;
}
