/*
#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL,"RU");

    double a, b;
    cin >> a >> b;

    if (a != 0) 
    {
        cout << -b / a;
    }
    else if (b == 0) 
    {
        cout << "бесконечно много решений";
    }
    else 
    {
        cout << "нет решений";
    }

    return 0;
}

#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main() 
{
    setlocale(LC_ALL,"RU");
    double a, b, c, D, x1, x2;

    cout << "Введите a, b, c: " << endl;
    cin >> a >> b >> c;

    if (a == 0) 
    {
        if (b == 0) 
        {
            if (c == 0) 
            {
                cout << "Бесконечно много решений" << endl;
            }
            else 
            {
                cout << "Решений нет" << endl;
            }
        }
        else 
        {
            cout << "x = " << -c / b << endl;
        }
    }
    else 
    {
        D = b * b - 4 * a * c;

        if (D > 0) 
        {
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);

            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
        else if (D == 0) 
        {
            x1 = -b / (2 * a);
            cout << "x = " << x1 << endl;
        }
        else 
        {
            cout << "Действительных корней нет" << endl;
        }
    }

    return 0;
}
*/

/*
#include <iostream>
#include <clocale>
using namespace std;

int main() 
{
    setlocale(LC_ALL, ".65001");
    int year, month;

    cout<<"Ввод год: "<< endl;
    cin >> year;
    cout<<"Ввод месяц: "<< endl;
    cin >> month;

    if (year<1999 || year>2049)
    {
        cout << "Год не входит в диапазон"<<endl;
        return 0;
    }
        
    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout<<31<<endl;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            cout<<30<<endl;
            break;
        case 2:
            if (year%400==0 || (year%4==0 && year%100!=0 ))
                cout << 29 << endl;
            else
                cout << 28 << endl;
            break;

        default:
            cout << "Неверный номер месяца" << endl;
            return 0;
    }
}
    
*/
#include <iostream>
#include <clocale>
using namespace std;

int main() 
{
    setlocale(LC_ALL, ".65001");
    int a,b;
    char znak;

    cout << "Введите первое число: "  << endl;
    cin >> a;

    cout << "Введите действие(+, -, *, /): "  << endl;
    cin >> znak;

    cout << "Введите второе число: "  << endl;
    cin >> b;

    switch (znak)
    {
        case '+':
            cout<<"Результат: "<< a+b << endl;
            break;

        case '-':
            cout<<"Результат: "<< a-b << endl;
            break;

        case '*':
            cout<<"Результат: "<< a*b << endl;
            break;

        case '/':
            if (b!=0)
                cout<<"Результат: "<< a/b << endl;
            else
                cout<<"Ошибка: "<< endl;
            break;

        default:
            cout << "Неверное действие" << endl;
            
    }
    return 0;
}