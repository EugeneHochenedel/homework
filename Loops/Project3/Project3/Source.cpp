#include <iostream>

int main()
{
	int i, j = 0;

	for (i = 0; i <= 1000; i = i + 1) {
		if (i % 3 == 0 || i % 5 == 0) {
			std::cout << i << std::endl;
		}
	}
	system("pause");
}