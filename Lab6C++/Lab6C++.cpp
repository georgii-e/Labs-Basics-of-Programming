// Lab6C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int akk(int n, int m);

int main()
{
	int n;
	int m;
	cout << "Input n "; cin >> n;
	cout << "Input m "; cin >> m;
	if (n < 0 || m < 0) cout << "Incorrect value" << endl;
	else cout << akk(n, m);
}

int akk(int n, int m)
{
	if (n == 0) return m + 1;
	else if (n != 0 && m == 0) return akk(n - 1, 1);
	else return akk(n-1, akk(n, m-1));

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
