// Lab3C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n = 1;
	double a;
	double x;
	cout << "x="; cin >> x;
	double s=0;
	while (n <= 11)
	{
		a= (x / (sqrt(n) * (n + 2)));
		s += a;
		if (x < 1)
		{
			cout << "a" << n << "=" << a << endl;
		}
		n += 1;
	}
	while (abs(a) >= 0.0001)
	{
		a= (x / (sqrt(n) * (n + 2)));
		s += a;
		if (x < 1)
		{
			cout << "a" << n << "=" << a << endl;			
		}
		n += 1;
	}
		cout << "Sum of first " << n - 1 << " a=" << s << endl;
}

