// Lab5C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int pal(int n, int part = 0)
{
    if (n == 0) return (part);
    return pal(n / 10, part * 10 + n % 10);
}


int main()
{
  int eps=1000;
  for (int i = 1; i <= eps; i++)
      if (pal(i) == i) printf("%3d\n", i);
  return(0);
}


