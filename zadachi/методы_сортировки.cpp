#include <iostream>
using namespace std;

int main()
{
int n;
cout << "Введите размер массива: ";
cin >> n;

int a[100];

cout << "Введите элементы массива: ";
for (int i = 0; i < n; i++)
{
    cin >> a[i];
}

// 1. СОРТИРОВКА ПУЗЫРЬКОМ
int b[100];
for (int i = 0; i < n; i++)
    b[i] = a[i];

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n - 1; j++)
    {
        if (b[j] > b[j + 1])
        {
            int t = b[j];
            b[j] = b[j + 1];
            b[j + 1] = t;
        }
    }
}

cout << "\nСортировка пузырьком: ";
for (int i = 0; i < n; i++)
    cout << b[i] << " ";


// 2. СОРТИРОВКА ВЫБОРОМ
int c[100];
for (int i = 0; i < n; i++)
    c[i] = a[i];

for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        if (c[i] > c[j])
        {
            int t = c[i];
            c[i] = c[j];
            c[j] = t;
        }
    }
}

cout << "\nСортировка выбором: ";
for (int i = 0; i < n; i++)
    cout << c[i] << " ";


// 3. СОРТИРОВКА ВСТАВКАМИ
int d[100];
for (int i = 0; i < n; i++)
    d[i] = a[i];

for (int i = 1; i < n; i++)
{
    int x = d[i];
    int j = i - 1;

    while (j >= 0 && d[j] > x)
    {
        d[j + 1] = d[j];
        j--;
    }

    d[j + 1] = x;
}

cout << "\nСортировка вставками: ";
for (int i = 0; i < n; i++)
    cout << d[i] << " ";

return 0;
}