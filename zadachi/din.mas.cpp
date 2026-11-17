#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, ".65001");

    int n, a;
    cin >> n >> a;

    int size = pow(a, n);
    int* arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Массив: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}