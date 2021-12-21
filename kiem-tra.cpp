// kiem-tra.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i, j, tgian;
	int a[10] = { 5,3,9,1,7,2,6,8,4,10 };
	for ( i = 0; i <= 9; i++ )
	{
		for (j = i + 1; j <= 9; j++)
		{
			if (a[i] > a[j])
			{
				tgian = a[i];
				a[i] = a[j];
				a[j] = tgian;
			}
		}
	}
	for (i = 0; i <= 9; i++) {
		cout << a[i] << " ";
	}
}