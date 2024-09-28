// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <limits.h>

using namespace std;

void quickSort(int* array, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = array[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (array[i] > pivot)
            i++;
        while (array[j] < pivot)
            j--;
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (j > low)
        quickSort(array, low, j);
    if (i < high)
        quickSort(array, i, high);
}

void largestInColumn(int mat[3][5], int rows, int cols)
{
    for (int i = 0; i < cols; i++) {
        int maxm = mat[0][i];

        for (int j = 1; j < rows; j++) {
            if (mat[j][i] > maxm)
                maxm = mat[j][i];
        }
        cout << "Макс: " << maxm << endl;
    }
}

struct Car
{
    char brand[100];
    char model;
};

class Fraction {
private:
    int numerator;
    int denominator;

public:
    double addition(int numerator, int denominator)
    {
        double otv = (numerator + numerator)*1.0/ denominator*1.0;
        return otv;
    }
    double subtraction(int numerator, int denominator)
    {
        double otv = (numerator - numerator)*1.0/ denominator * 1.0;
        return otv;
    }
    double multiplication(int numerator, int denominator)
    {
        double otv = ((numerator*1.0) * (numerator*1.0)) / ((denominator*1.0) * (denominator*1.0));
        return otv;
    }
    double division(int numerator, int denominator)
    {
        double otv = (numerator * denominator) / (denominator*numerator);
        return otv;
    }
};


int main()
{
    setlocale(0, "rus");
    // одномерные массивы
    int mas[10] = { 34, 12, 1, -1, 5, 1, 6, 8, 7, 0 };
    int n = sizeof(mas) / sizeof(mas[0]);

    quickSort(mas, 0, n - 1);

    std::cout << mas[3] << endl;

    for (int i = 0; i < n; i++)
    {
        std::cout << mas[i]<<" ";
    }
    std::cout << "\n";

    // многомерные массивы
    int arr[2][3][5] = {
        {
            {1,2,3,4,5},
            {6,7,8,9,10},
            {11,12,13,14,15}
        },
        {
            {16,17,18,19,20},
            {21,22,23,24,25},
            {26,27,28,29,30}
        }
    };

    largestInColumn(arr[0], 3, 5);
    cout << endl;
    largestInColumn(arr[1], 3, 5);

    // структуры
    Car car1;
    std::cout << "Введите бренд машины \n";
    std::cin >>  car1.brand;
    std::cout << "Введите модель машины \n";
    std::cin >>  car1.model;
    std::cout << "Бренд машины " << car1.brand << " и модель машины " << car1.model << "\n";

    //// классы
    Fraction s1;
    int numerator;
    int denominator;
    int vibor;
    std::cout << "1- Сложение \n2- Вычитания \n3- Умножения \n4- Деления\n";
    std::cin >> vibor;
    if (vibor == 1)
    {
        std::cout << "Введите числитель первого числа ";
        std::cin >> numerator;
        std::cout << "Введите знаменатель первого числа ";
        std::cin >> denominator;
        double otv = s1.addition(numerator, denominator);
        std::cout << "Сложение ответ: "<<otv;
    }
    else if (vibor == 2)
    {
        std::cout << "Введите числитель первого числа ";
        std::cin >> numerator;
        std::cout << "Введите знаменатель первого числа ";
        std::cin >> denominator;
        double otv = s1.subtraction(numerator, denominator);
        std::cout << "Вычитание ответ: " << otv;
    }
    else if (vibor == 3)
    {
        std::cout << "Введите числитель первого числа ";
        std::cin >> numerator;
        std::cout << "Введите знаменатель первого числа ";
        std::cin >> denominator;
        double otv = s1.multiplication(numerator, denominator);
        std::cout << "Умножение ответ: " << otv;
    }
    else if (vibor == 4)
    {
        std::cout << "Введите числитель первого числа ";
        std::cin >> numerator;
        std::cout << "Введите знаменатель первого числа ";
        std::cin >> denominator;
        double otv = s1.division(numerator, denominator);
        std::cout << "Деление ответ: " << otv;
    }
}


