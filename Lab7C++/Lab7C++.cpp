// Lab7C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;
int length; //довжина масивів
int* A,*B; //масиви А, В
float* C;  //масив С
int counterName = 1; //лічильник для виведення номеру масива
float Sum = 0; //сума елементів
int max_value; //максималье значення 
int counterAverage = 0; //лічильник для середнього арифметичного 
float average; //середнє арифметичне
int* input(int SIZE); //генерація масивів А і В
float* array_C(int SIZE); //генерація масиву С
void processing(float* p_arr); //пошук середнього арифметичного елементів
void max(float* p_arr); //пошук максимального значення
void swap(float* p_arr); //заміна значення максимального елемента на середнє
void outputC(float* p_arr); //вивід масиву С
void output(int *p_arr); //вивід масивів А і В
void remove(int* p_arr); //видалення масивів А і В
void removeC(float* p_arr); //видалення масиву С
int main()
{
    srand(time(NULL));
    cout << "Input size of array: ";
    cin >> length;
    A = input(length);
    B = input(length);
    output(A);
    output(B);
    C = array_C(length);
    outputC(C);
    processing(C);
    max(C);
    swap(C);
    outputC(C);
    remove(A);
    remove(B);
    removeC(C);
}

int* input(int SIZE)
{
    int* p_arr = new int[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        *(p_arr + i) = rand() % 200 - 100;
       
    }   
    return p_arr;
}

void output(int* p_arr)
{
    cout << "Array " << counterName << ": ";
    counterName++;
    for (int i = 0; i < length; i++)
        cout << setw (4) << *(p_arr + i) << "  ";
    cout << endl;
}

void outputC(float* p_arr)
{
    cout << "Array " << counterName << ": ";
    counterName++;
    for (int i = 0; i < length; i++)
        cout << setw(4) << *(p_arr + i) << "  ";
    cout << endl;
}

float* array_C(int SIZE)
{
    float* p_arr = new float[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        *(p_arr + i) = abs(pow(A[i], 2) - pow(B[i], 2));

    }
    return p_arr;
}

void processing(float* p_arr)
{
    for (int i = 0; i < length; i++)
    {
        Sum += *(p_arr + i);
        counterAverage++;
        average = Sum / counterAverage;
    }
    cout << "Average: " << average << endl;
}

void max(float* p_arr)
{
    max_value = *p_arr;
    for (int i = 0; i < length; i++)
    {
        if (*(p_arr + i) > max_value) max_value = *(p_arr + i);

    }
    cout << "Maximum element: " << max_value << endl;
}

void swap(float* p_arr)
{
    for (int i = 0; i < length; i++)
    {
        if (*(p_arr + i) == max_value) *(p_arr + i)=average;
    }
}

void remove(int* p_arr)
{
    delete[] p_arr;
}

void removeC(float* p_arr)
{
    delete[] p_arr;
}