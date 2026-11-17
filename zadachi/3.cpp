#include <iostream>
using namespace std;

int main()
{
int a = 4, b = 9;

int* p = &a;
int* q = p;
int& r = *p;

p = &b;
q += *p;

return 0;
}