#include <iostream>
using namespace std;

int main()
{
int a = 2, b = 5, c = 8;

int* p = &a;
int& r = a;

int copy = *p;

*p = b;
p = &c;
r = *p;
*p = b + copy;

p = &a;
*p = r - copy;

r++;

cout << "a = " << a << endl;
cout << "b = " << b << endl;
cout << "c = " << c << endl;
cout << "copy = " << copy << endl;

return 0;
}