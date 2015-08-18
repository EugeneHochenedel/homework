#include <iostream>

int main()
{
	int x;
	int y;

	std::cout << "Enter two different numbers." << std::endl;
	std::cin >> x >> y;

	if (x > y) {
		std::cout << x << std::endl;
	}
	else if (x < y) {
		std::cout << y << std::endl;
	}
	system("pause");
}