#include <iostream>
int main()
{
	int a, b, c, d, e, f;

	std::cout << "Enter five (5) numbers" << std::endl;
	std::cin >> a >> b >> c >> d >> e;
	f = a + b + c + d + e;
	std::cout << "Average = " << f / 5 << std::endl;
	system("pause");

}