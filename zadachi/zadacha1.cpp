#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, ".65001");

    int n, i = 1, a;
    bool f = false;

    cin >> n;
    while ((i <= n) && !f)
    {
        cin >> a;
        if (a != 0)
            f = true;
        i += 1;
    }

    if (f)
    {
        if (a > 0)
            cout << "Число " << a << " положительное" << endl;
        else
            cout << "Число " << a << " отрицательное" << endl;
    }

    else
        cout << "Все элементы равны 0" << endl;

    return 0;
}