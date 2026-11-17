#include <iostream>
using namespace std;

int main()
{
int a = 5, b = 8;

int& r = a;
int& s = a;

int copy = a;

r = b;
s += 2;
b = copy;

cout << "a = " << a << endl;
cout << "r = " << r << endl;
cout << "b = " << b << endl;
cout << "s = " << s << endl;
cout << "copy = " << copy << endl;

return 0;
}