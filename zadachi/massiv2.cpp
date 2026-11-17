#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, ".65001");
    srand(time(0));
    int size;
    cout << "Введите размер массива: ";
    cin >> size;
    if (size <= 0)
    {
        cout << "Некорректный размер массива";
        return 0;
    }
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
    cout << "Создан массив: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // подсчет суммы элементов
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "Сумма элементов: " << sum << endl;
    // освобождение памяти
    delete[] arr;
    return 0;
}
