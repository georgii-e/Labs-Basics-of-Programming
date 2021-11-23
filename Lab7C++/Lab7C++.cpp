// Lab7C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std; //�������� ����?
float* input(int SIZE); //��������� ������ � � �
float* array_C(int SIZE, float* p_A, float* p_B); //��������� ������ �
float processing(float* p_arr, int length); //����� ���������� ������������� ��������
int max(float* p_arr, int length); //����� ������������� ��������
void swap(float* p_arr, int length, float average, int max_value); //����� �������� ������������� �������� �� ������
void output(float *p_arr, int length, int* p_counterName); //���� ������
void remove(float* p_arr); //��������� ������
int main()
{
    srand(time(NULL));
    float* A, * B, * C;  //������ �, �, �
    int counterName=1; //�������� ��� ��������� ������ ������
    int max_value; //���������� ��������
    int length; //������� ������
    float average; //������ �����������
    cout << "Input size of array: ";
    cin >> length;
    A = input(length);
    B = input(length);
    output(A, length, &counterName);
    output(B, length, &counterName);
    C = array_C(length, A, B);
    output(C, length, &counterName);
    average=processing(C, length);
    max_value=max(C, length);
    swap(C, length, average, max_value);
    output(C, length, &counterName);
    remove(A);
    remove(B);
    remove(C);
}

float* input(int SIZE)
{
    float* p_arr = new float[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        *(p_arr + i) = rand() % 200 - 100;
       
    }   
    return p_arr;
}

void output(float* p_arr, int length, int *p_counterName)
{
    
    cout << "Array " << *p_counterName << ": ";
    (* p_counterName)++;
    for (int i = 0; i < length; i++)
        cout << setw (4) << *(p_arr + i) << "  ";
    cout << endl;
}

float* array_C(int SIZE, float* p_A, float* p_B)
{
    float* p_arr = new float[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        *(p_arr + i) = abs(pow(p_A[i], 2) - pow(p_B[i], 2));

    }
    return p_arr;
}

float processing(float* p_arr, int length)
{
    float average;
    int counterAverage = 0; //�������� ��� ���������� ������������� 
    float Sum = 0;
    for (int i = 0; i < length; i++)
    {
        Sum += *(p_arr + i);
        counterAverage++;
        average = Sum / counterAverage;
    }
    cout << "Average: " << average << endl;
    return average;
}

int max(float* p_arr, int length)
{
    int max_value;
    max_value = *p_arr;
    for (int i = 0; i < length; i++)
    {
        if (*(p_arr + i) > max_value) max_value = *(p_arr + i);

    }
    cout << "Maximum element: " << max_value << endl;
    return max_value;
}

void swap(float* p_arr, int length, float average, int max_value)
{
    for (int i = 0; i < length; i++)
    {
        if (*(p_arr + i) == max_value) *(p_arr + i)=average;
    }
}

void remove(float* p_arr)
{
    delete[] p_arr;
}
