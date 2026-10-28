#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    const double eps = 1e-4;  // Задаём точность вычислений
    int n = 1;  // Номер текущего члена ряда
    double a = 2.0;  // Первый член ряда: a1 = 2^1 * 1! / 1^1 = 2
    double S = 0.0;
    while (a >= eps)     // Вычисляем сумму, пока текущий член не меньше точности
    {
        S += a; // Прибавляем текущий член к сумме
        // Вычисляем следующий член по рекуррентной формуле:
        // a(n+1) = a(n) * 2 * (n / (n + 1))^n
        a = a * 2.0 * pow(
            static_cast<double>(n) / (n + 1), n
        );
        n++; // Переходим к следующему члену ряда
    }
    cout << "Сумма ряда S = " << S << endl;
    cout << "Количество учтённых членов: " << n - 1 << endl;
    cout << "Первый отброшенный член a_" << n
         << " = " << a << endl;
    cout << "Точность eps = " << eps << endl;
    return 0;
}