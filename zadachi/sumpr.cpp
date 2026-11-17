#include <iostream>
using namespace std;

int main()
{
int n;
cout << "Введите размер массивов: ";
cin >> n;

int a[100], b[100];

cout << "Введите элементы первого массива: ";
for (int i = 0; i < n; i++)
    cin >> a[i];

cout << "Введите элементы второго массива: ";
for (int i = 0; i < n; i++)
    cin >> b[i];

int sum = 0;

for (int i = 0; i < n; i++)
{
    sum += a[i] * b[i];
}

cout << "Сумма произведений = " << sum;

return 0;
}