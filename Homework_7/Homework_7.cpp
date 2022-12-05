// Homework_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//Задание 1:
//Используя два указателя на массив целых чисел, скопировать один массив в другой.
//Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.

void createArr(int* arr, int size)
{
    for (int i = 0; i < size; i++) 
        *(arr + i) = rand() % (10 - (-10)) + (-10);
}
void view(int* arr, int size)
{
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << "\t";
    }
}
void changeArr(int* arr, int* arr1, int size)
{
    for (int i = 0; i < size; i++) 
        *(arr + i) = *(arr1 + i);    
}


#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    //Задание 1:
    int const size = 10;
    int a[size];
    int b[size];
    createArr(a, size);
    view(a, size);
    cout << endl;
    createArr(b, size);
    view(b, size);
    cout << endl;
    changeArr(a, b, size);
}

