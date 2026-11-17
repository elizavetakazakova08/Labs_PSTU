#include <iostream>
using namespace std;

int main()
{
int a = 10;
int b = 20;

int& r = a;

r = b;
r++;

cout << "a = " << a << endl;
cout << "b = " << b << endl;
cout << "r = " << r << endl;

return 0;
}