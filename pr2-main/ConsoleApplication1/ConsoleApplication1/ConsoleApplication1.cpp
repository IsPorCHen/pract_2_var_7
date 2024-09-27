// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

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
    double slo(int numerator, int denominator)
    {
        double otv = (numerator + numerator)*1.0/ denominator*1.0;
        return otv;
    }
    double vi(int numerator, int denominator)
    {
        double otv = (numerator - numerator)*1.0/ denominator * 1.0;
        return otv;
    }
    double um(int numerator, int denominator)
    {
        double otv = ((numerator*1.0) * (numerator*1.0)) / ((denominator*1.0) * (denominator*1.0));
        return otv;
    }
    double del(int numerator, int denominator)
    {
        double otv = (numerator * denominator) / (denominator*numerator);
        return otv;
    }
};


int main()
{
    setlocale(0, "rus");
    
    //1
    int mas[10] = { 1,2,3,4,7,8,5,6,9,10 };
    for (int h = 0; h < 10; h++)
    {
        int j = 0;
        do
        {
            if (mas[h] > mas[j] || mas[h] == mas[j])
            {
                int flag;
                flag = mas[h];
                mas[h] = mas[j];
                mas[j] = flag;
            }
            j++;
        } while (j < 10);
    }
    for (int x = 0; x < 10; x++)
    {
        std::cout << mas[x]<<" ";
    }
    std::cout << "\n";

    //2
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

    int max[3][5] = {};
    for (int i = 0; i < 3; i++)
    {
        for(int j=0; j<5;j++)
        {
            max[i][j] = -100;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                if(arr[i][j][k]>max[j][k])
                {
                    max[j][k] = arr[i][j][k];
                }
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cout << " Максимальное значение в столбце " << i+1 <<" : "<<max[i][j]<<"\n";
        }
    }

    //3
    Car car1;
    std::cout << "Введите бренд машины \n";
    std::cin >>  car1.brand;
    std::cout << "Введите модель машины \n";
    std::cin >>  car1.model;
    std::cout << "Бренд машины " << car1.brand << " и модель машины " << car1.model << "\n";

    //4
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
        double otv = s1.slo(numerator, denominator);
        std::cout << "Сложение ответ: "<<otv;
    }
    else if (vibor == 2)
    {
        std::cout << "Введите числитель первого числа ";
        std::cin >> numerator;
        std::cout << "Введите знаменатель первого числа ";
        std::cin >> denominator;
        double otv = s1.vi(numerator, denominator);
        std::cout << "Вычитание ответ: " << otv;
    }
    else if (vibor == 3)
    {
        std::cout << "Введите числитель первого числа ";
        std::cin >> numerator;
        std::cout << "Введите знаменатель первого числа ";
        std::cin >> denominator;
        double otv = s1.um(numerator, denominator);
        std::cout << "Умножение ответ: " << otv;
    }
    else if (vibor == 4)
    {
        std::cout << "Введите числитель первого числа ";
        std::cin >> numerator;
        std::cout << "Введите знаменатель первого числа ";
        std::cin >> denominator;
        double otv = s1.del(numerator, denominator);
        std::cout << "Деление ответ: " << otv;
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
