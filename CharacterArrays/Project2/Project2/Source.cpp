#include <iostream>

int main()
{
	char a[20];
	char b[20];

	strlen(a);
	strlen(b);

	std::cout << "Enter your first and last name." << std::endl;
	std::cin >> a >> b;
	std::cout << b << ", " << a << std::endl;

	system("pause");
}