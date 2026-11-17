#include <iostream>
using namespace std;

int main()
{
int a = 12;

int* ptr = &a;

int copy = *ptr;

(*ptr)++;

cout << "a = " << a << endl;
cout << "copy = " << copy << endl;
cout << "*ptr = " << *ptr << endl;

return 0;
}