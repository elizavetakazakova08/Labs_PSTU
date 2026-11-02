#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, ".65001");
    int n;
    cout<<"введите нечетное число звезд основания треугольника: "<<endl;
    cin >> n;
    if (n%2!=0 && n>=0)
    {
        for (int i=1;i<=(n+1)/2;i++)
        {
            for (int j=1;j<=(n/2-(i-1));j++)
                cout << " ";
            for (int j=1;j<=(1+(i-1)*2);j++)
                cout << "*";
            cout << endl;
        }
    }
    else
        cout<<"ошибка"<<endl;
    return 0;
}
