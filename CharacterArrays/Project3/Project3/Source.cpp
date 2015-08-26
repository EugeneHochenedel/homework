#include <iostream>
using namespace std;

int main()
{

	const int totalNames = 5;
	
	char names[totalNames][100];

	char name[100];

	cout << "Enter five names ( w/ first and last)." << endl;

	for (int a = 0; a < totalNames; a++) 
	{
		cin.getline(name, 100);
		
		for (int b = 0; b < 100; b++) 
		{
			names[a][b] = name[b];
		}
	}
	
	for (int a = 0; a < totalNames; a++) 
	{
		
		for (int b = strlen(names[a]); b >= 0; b--)
		{
			cout << names[a][b];
		}

		cout << endl;
	}

	system("pause");
}