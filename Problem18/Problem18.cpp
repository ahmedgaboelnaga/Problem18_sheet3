#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 10; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 9; j >= i; j--)
		{
			cout << j;
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			if (i == 1 || i == 5 || j == 1 || j == 5)
				cout << "# ";
			else
				cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			cout << "#*";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 1; i <= 6; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i == 1 || i == 4)
			{
				cout << "@";		
			}
			else if (i == 2 || i == 5)
			{
				cout << "#";
			}
			else
			{
				cout << "&";
			}
		}
		cout << endl;
	}
	return 0;
}