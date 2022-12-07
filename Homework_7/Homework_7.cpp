// Homework_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
//Задание 1:
//Используя два указателя на массив целых чисел, скопировать один массив в другой.
//Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.

//void createArr(int* arr, int size)
//{
//    for (int i = 0; i < size; i++) 
//        *(arr + i) = rand() % (10 - (-10)) + (-10);
//}
//void view(int* arr, int size)
//{
//    for (int i = 0; i < size; i++) 
//        cout << *(arr + i) << "\t";
//    
//}
//void changeArr(int* arr, int* arr1, int size)
//{
//    for (int i = 0; i < size; i++) 
//        *(arr + i) = *(arr1 + i);    
//}

//Задание 2:
//Используя указатель на массив целых чисел, изменить порядок следования элементов массива на противоположный.
//Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.

//void createArr(int* arr, int size)
//{
//    for (int i = 0; i < size; i++)
//        *(arr + i) = i;
//}
//void view(int* arr, int size)
//{
//    for (int i = 0; i < size; i++)
//        cout << *(arr + i) << "\t";
//}
//void changeMass(int* arr, int size)
//{
//    for (int i = 0; i < size/2; i++)        
//            swap(*(arr + i), *(arr + size - 1 - i));        
//}
//Задание 3:
//Используя два указателя на массивы целых чисел, скопировать один массив в другой так, чтобы во втором массиве элементы находились в обратном порядке.
//Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.
//void createArr(int* arr, int size)
//{
//    for (int i = 0; i < size; i++)
//        *(arr + i) = i;
//}
//void view(int* arr, int size)
//{
//    for (int i = 0; i < size; i++)
//        cout << *(arr + i) << "\t";
//}
//void changeArr(int* a, int* b, int size)
//{
//    for (int i = 0; i < size; i++) 
//        *(b + i) = *(a + size - 1 - i);    
//}

//Задание 4:
//Используя указатели и оператор разыменования, определить наибольшее из двух чисел.
//void maxim(int* a, int* b)
//{
//    if (*a > *b)
//        cout << *a;
//    if (*a == *b)
//        cout << " Числа равны.";
//    else
//        cout << *b;
//}

//Задание 5:
//Используя указатели и оператор разыменования, определить знак числа, введённого с клавиатуры.
//void sign(int* a)
//{
//    if (*a < 0)
//        cout << " < 0";
//    if (*a > 0)
//        cout << " > 0";
//}

//Задание 6:
//Используя указатели и оператор разыменования, обменять местами значения двух переменных.
//void replacement(int* a, int* b)
//{
//    swap(*a, *b);
//    cout << *a << " " << *b;
//}

//Задание 7:
//Написать примитивный калькулятор, пользуясь только указателями.
//void calculator(int* a, int* b, char* calc)
//{
//    if (*calc == '+')
//        cout << *a + *b;
//    if (*calc == '-')
//        cout << *a - *b;
//    if (*calc == '*')
//        cout << *a * *b;
//    else
//        cout << *a / *b;
//}

//Задание 8:
//Используя указатель на массив целых чисел, посчитать сумму элементов массива.
//Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.

void createArr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
        *(arr + i) = i;
}
void view(int* arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << *(arr + i) << "\t";
}
void sumas(int* arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += *(arr + i);
    cout << sum;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    //Задание 1:

   /* int const size = 10;
    int a[size];
    int b[size];
    createArr(a, size);
    view(a, size);
    cout << endl;
    createArr(b, size);
    view(b, size);
    cout << endl;
    changeArr(a, b, size);
    view(a, size);*/

    //Задание 2:
    /*int const size = 10;
    int arr[size];
    createArr(arr, size);
    view(arr, size);
    changeMass(arr, size);
    cout << endl;
    view(arr, size);*/

    //Задание 3:
    /*const int size = 10;
    int a[size];
    int b[size];
    createArr(a, size);    
    view(a, size);
    cout << endl;
    changeArr(a, b, size);
    view(b, size);*/
    
    //Задание 4:
  /*  int a, b;
    int* pa = &a;
    int* pb = &b;
    cin >> a >> b;
    maxim(pa, pb);      */

    //Задание 5:
  /*  int a;
    cout << " Введите ваше число\n";
    cin >> a;
    int* pa = &a;
    cout << endl;
    sign(pa);*/

    //Задание 6:
    /*int a = 2, b = 5;
    int* pa = &a;
    int* pb = &b;
    replacement(pa, pb);*/

    //Задание 7:
   /* int a, b;
    char calc;
    int exiT = 1;
    while (exiT != 0)
    {
        cout << " Какое действие хотите произвести?   + - * /   " << endl;
        cin >> calc;
        cout << endl << " Введите первое число\n";
        cin >> a;
        cout << " Введите второе число\n";
        cin >> b;
        int* pa = &a;
        int* pb = &b;
        char* pcalc = &calc;
        calculator(pa, pb, pcalc);
        cout << " Хотите поститать еще?    1 - хочу,  0 - не хочу.";
        cin >> exiT;
    }*/

    //Задание 8:
    const int size = 10;
    int arr[size];
    createArr(arr, size);
    view(arr, size);
    cout << endl;
    sumas(arr, size);
}

