// Lab8C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip> 
using namespace std;

int** input(int length);
void output(int** arr, int *counterName, int length);
void remove(int** arr, int length);
int sum(int** arr, int length); //обчислення суми за умовами завдання 
int** min_sum(int a, int b, int c, int* counterName, int* Sum, int** A, int** B, int** C); // пошук мінімальної суми та присвоєння іншій змінній номеру відповідного масиву
int** bubble_sort(int** arr, int length); //сортування та вивід масиву
int main()
{
    int** A, ** B, ** C, ** D;
    int Sum1, Sum2, Sum3;
    srand(time(NULL));
    int length; 
    int minSum=0;
    int counterName = 1;
    cout << "Input size of array: ";
    cin >> length;
    A = input(length);
    output(A, &counterName, length);
    Sum1 = sum(A, length);
    cout << "Sum of 1 array: " << Sum1 << endl;
    B = input(length);
    output(B, &counterName, length);
    Sum2 = sum(B, length);
    cout << "Sum of 2 array: " << Sum2 << endl;
    C = input(length);
    output(C, &counterName, length);
    Sum3 = sum(C, length);
    cout << "Sum of 3 array: " << Sum3 << endl;
    D = min_sum(Sum1, Sum2, Sum3, &counterName, &minSum, A, B, C); //пошук масиву з мінімальною сумою
    cout << "The minimum sum: " <<minSum <<" belongs to the "<< counterName <<" array" << endl; 
    output(bubble_sort(D, length), &counterName, length);
    remove(A, length);
    remove(B, length);
    remove(C, length);
}

int** input(int length)
{
    int** arr = new int* [length];
    for (int i = 0; i < length; i++)
        arr[i] = new int[length];
    for (int i = 0; i < length; i++)
        for (int j = 0; j <length; j++)
            arr[i][j] = rand() % 100 - 50;
    return arr;

} 
void output(int** arr, int* counterName, int length)
{
    cout << "Array " << (* counterName) << ":" << endl;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
            cout << setw(5) << arr[i][j];
        cout << endl;
    }
    (* counterName)++;
}
void remove(int** arr, int length)
{
    for (int i = 0; i < length; i++)
        delete[] arr[i];
    delete arr;
}
int sum(int** arr, int length)
{
    int Sum = 0;
    int j = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i][j] < 0)
            {
            Sum += abs(arr[i][i]);
            }
    }
    return Sum;
}
int** min_sum(int a, int b, int c, int * counterName, int* Sum, int** A, int** B, int** C)
{
    
    if (a <= b && a <= c)
    {
        (*counterName) = 1;
        (*Sum) = a;
        return A;
    }
    if (b <= c && b <= a)
    {
        (*counterName) = 2;
        (*Sum) = b;
        return B;
    }
    else
    {
        (*counterName) = 3;
        (*Sum) = c;
        return C;
    }
}
int** bubble_sort(int** arr, int length)
{  
    int temp;
    for (int i = 0; i < length; i++)
        for (int k = 0; k < length; k++)
            for (int j = 0; j < length - 1; j++)
                if (arr[i][j] > arr[i][j + 1])
                {
                    temp = arr[i][j];
                    arr[i][j] = arr[i][j + 1];
                    arr[i][j + 1] = temp;

                }
    return arr;
}