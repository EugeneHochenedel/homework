#include <iostream>

int main()
{
	char a[20];
	char b[20];

	std::cout << "Enter your first and last name." << std::endl;
	std::cin >> a >> b;
	std::cout << a << " " << b << std::endl;

	system("pause");
}