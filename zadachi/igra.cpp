#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, ".65001");

// 1. Статический массив
const int size = 5;
int arr[size];

cout << "СТАТИЧЕСКИЙ МАССИВ\n";

cout << "Введите 5 элементов:\n";

for (int i = 0; i < size; i++)
{
    cin >> arr[i];
}

// Вывод массива
cout << "\nМассив: ";

for (int i = 0; i < size; i++)
{
    cout << arr[i] << " ";
}

// Поиск максимума и минимума
int max = arr[0];
int min = arr[0];
int maxIndex = 0;
int minIndex = 0;

for (int i = 1; i < size; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
        maxIndex = i;
    }

    if (arr[i] < min)
    {
        min = arr[i];
        minIndex = i;
    }
}

cout << "\nМаксимум: " << max;
cout << "\nИндекс максимума: " << maxIndex;

cout << "\nМинимум: " << min;
cout << "\nИндекс минимума: " << minIndex;

// 2. Динамический массив
int n;

cout << "\n\nДИНАМИЧЕСКИЙ МАССИВ\n";
cout << "Введите размер массива: ";
cin >> n;

if (n <= 0)
{
    cout << "Неверный размер массива!";
    return 0;
}

int* dynamicArr = new int[n];

cout << "Введите элементы:\n";

for (int i = 0; i < n; i++)
{
    cin >> dynamicArr[i];
}

// Вывод динамического массива
cout << "Динамический массив: ";

for (int i = 0; i < n; i++)
{
    cout << dynamicArr[i] << " ";
}

// Работа с границами
cout << "\n\nПервый элемент: " << dynamicArr[0];
cout << "\nПоследний элемент: " << dynamicArr[n - 1];

cout << "\nКоличество элементов: " << n;

// Проверка индекса
int index;

cout << "\nВведите индекс для обращения к элементу: ";
cin >> index;

if (index >= 0 && index < n)
{
    cout << "Элемент: " << dynamicArr[index];
}
else
{
    cout << "Ошибка! Выход за границы массива.";
}

// Освобождение памяти
delete[] dynamicArr;

return 0;
}