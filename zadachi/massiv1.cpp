#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,".65001");
    int n;
    cout << "Введите количество элементов: ";
    cin >> n;

    int a[100];

    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    int min = a[0];       
    int index = 0;        
    int number = 1;       
    int count = 1;       

    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            index = i;
            number = i + 1;
            count = 1;
        }
        else if (a[i] == min)
        {
            count++;
        }
    }

    cout << "min: " << min << endl;
    cout << "index: " << index << endl;
    cout << "number: " <<  number << endl;
    cout << "count: " << count << endl;

    return 0;
}