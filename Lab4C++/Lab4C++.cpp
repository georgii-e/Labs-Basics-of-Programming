// Lab4C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float x1 = 1;
    float x2 = 0.3;
    float tmp = x1;
    float xn;
    int n;
    cout << "Enter n" << endl; cin >> n;
    cout << "x1=" << x1 << endl;
    cout << "x2=" << x2 << endl;
    for (int i = 3; i <= n; i++)
    {
        xn = (i + 1) * tmp;
        tmp = x2;
        x2 = xn;
        cout << "x" << i << "=" << xn << endl;
    }
    

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

