
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double q;
	double n;
	double b;
	double s;
	cout << "q="; cin >> q;
	cout << "n="; cin >> n;
	cout << "b="; cin >> b;
	s = b * (1 - pow(q, n)) / (1 - q);
	cout << "Sum=" << s;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
