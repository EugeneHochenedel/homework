#include <iostream>
using namespace std;

int main()
{
	char a[40];

	cout << "Enter your name (first and last)." << endl;

	cin.getline(a, 20);

	cout << a << endl;
	system("pause");
}