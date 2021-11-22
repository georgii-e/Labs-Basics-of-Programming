// Lab8C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip> 
using namespace std;

int counterName = 1;
int length;
int cols;
int rows;
int Sum;
int num;
int** A, ** B, ** C;
int** input();
void output(int** arr);
void remove(int** arr);
int sum(int** arr);
int min_sum(int a, int b, int c, int* p_num);
int main()
{
    srand(time(NULL));
    cout << "Input size of array: ";
    cin >> length;
    A = input();
    output(A);
    cout << "Sum of 1 array: " << sum(A) << endl;
    B = input();
    output(B);
    cout << "Sum of 2 array: " << sum(B) << endl;
    C = input();
    output(C);
    cout << "Sum of 3 array: " << sum(C) << endl;
    Sum = min_sum(sum(A), sum(B), sum(C), &num);
    cout << "The minimum sum:" <<Sum <<" belongs to the "<<num<<" array" << endl;
    cout << num;
    remove(A);
    remove(B);
    remove(C);
}

int** input()
{
    cols = length;
    rows = length;
    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++)
        arr[i] = new int[cols];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            arr[i][j] = rand() % 100 - 50;
    return arr;

} 
void output(int** arr)
{
    cout << "Array " << counterName <<":" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << setw(5) << arr[i][j];
        cout << endl;
    }
}
void remove(int** arr)
{
    for (int i = 0; i < rows; i++)
        delete[] arr[i];
    delete arr;
}
int sum(int** arr)
{
    Sum = 0;
    for (int i = 0; i < rows; i++)
    {
        int j = 0;
        if (arr[i][j] < 0)
            {
            Sum += abs(arr[i][i]);
            }
    }
    return Sum;
}
int min_sum(int a, int b, int c, int *p_num)
{
    if (a <= b && a <= c)
    {
        (* p_num) = 1;
        return a;
    }
    if (b <= c && b <= a)
    {
        (* p_num) = 2;
        return b;
    }
    else
    {
        (* p_num) = 3;
        return c;
    }
}
