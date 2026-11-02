#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,".65001");
    int n;
    long double sum=0;
    cout<<"введите число слагаемых n: "<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        long double p=1;
        for(int j=i;j<=(2*i);j++)
            p=p*j;
        sum=sum+p;
    }
    cout<<"сумма = "<<sum<<endl;
    return 0;
}
