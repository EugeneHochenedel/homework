#include <iostream>

int main()
{
	int iteration = 100;
	int i;

	for (i = 0; i <= iteration; i++) 
	{
		std::cout << i << std::endl;
		if (i % 3 == 0)
		{
			std::cout << "Fizz" << std::endl;
		}
		if (i % 5 == 0)
		{
			std::cout << "Buzz" << std::endl;
		}
		if (i % 15 == 0)
		{
			std::cout << "FizzBuzz" << std::endl;
		}
	}
	system ("pause");
}