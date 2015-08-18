#include <iostream>

int main()
{
	int a;
	int b;
	int c;

	std::cout << "Pick two numbers." << std::endl;
	std::cin >> a >> b;
	c = a;
	a = b;
	b = c;

	std::cout << "a = " << a << " " << " b = " << b << " " << std::endl;
	system("Pause");
}