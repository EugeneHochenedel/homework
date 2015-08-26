#include <iostream>

using namespace std;

int main()

{
	
	char name[100];
		
	cout << "Enter your name (first and last)." << endl;
	
	cin.getline(name, 100);
	
		for (int a = strlen(name); a >= 0; a--)

		{
			cout << name[a];
		}
	
		cout << endl;
	
	system("pause");
	
	return 0;
}