#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, ".65001");
    int a, b;
    bool f = true;
    cout<<"введите первое число: ";
    cin>>a;
    if (a==0)
    {
        cout<<"последовательность пуста"<<endl;
        return 0;
    }

    cout<<"введите следующее число: ";
    cin>>b;
    while ((a<b)&&(b!=0)&&f)
    {
        a=b;
        cout<<"введите следующее число: ";
        cin>>b;
    }
    if ((b==0)&&f)
        cout<<"последовательность упорядочена по возрастанию"<<endl;
    else
        cout<<"последовательность не упорядочена по возрастанию"<<endl;
    return 0;
}
