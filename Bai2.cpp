// Bai2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i, tn ,j,tg;
	string f,tg1;
	string a[5];
	string b[5];
	int c[5];
	int d[5];
	int e[5];
	for (i=0;i<=4;i++)
	{
		cin >> a[i] >> b[i] >> c[i] >> d[i];
		e[i] = c[i] * d[i];
	}
	cin >> f;
	for (i = 0; i <= 4; i++)
	{
		if (b[i] == f)
		{
			cout << a[i] << " - " << b[i] << " - " << c[i] << " - " << d[i] << '\n';
		};

	}
	for (i = 0; i <= 4; i++)
	{
		for (j = i + 1; j <= 4; j++)
		{
			if (e[i] > e[j])
			{
				tg = e[i];
				e[i] = e[j];
				e[j] = tg;
				tg = c[i];
				c[i] = c[j];
				c[j] = tg;
				tg = d[i];
				d[i] = d[j];
				d[j] = tg;
				tg1 = a[i];
				a[i] = a[j];
				a[j] = tg1;
				tg1 = b[i];
				b[i] = b[j];
				b[j] = tg1;
			}
		}
	}
	for (i = 0; i <= 4; i++)
	{
			cout << a[i] << " - " << b[i] << " - " << c[i] << " - " << d[i] << " - "  << e[i] << '\n';
	}
				
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
