#include <iostream>

int main()
{

	int y;
	int b = 100;

	std::cout << "Enter a number." << std::endl;
	std::cin >> y;

	if (y == 0) {
		std::cout << "x = " << b << std::endl;
	}

	if (y != 0) {
		std::cout << "x = undefined" << std::endl;
	}
	system ("pause");
}