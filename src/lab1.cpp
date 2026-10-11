#include <iostream>
#include <cmath>
using namespace std;

// вычисления с типом float 
int main() {
    float a=1000.0f;
    float b=0.0001f;
    
    float ab1 = pow(a+b, 2);
    float a1 = pow(a,2);
    float ab2 = 2*a*b;
    float chisl = ab1 - (a1 + ab2);
    float znam = pow(b,2);
    float res = chisl/znam;

    cout << "Float: " << res << endl;

    // вычисления с типом double
    double ad = 1000.0;
    double bd = 0.0001;

    double adbd1 = pow(ad+bd, 2);
    double ad1 = pow(ad,2);
    double adbd2 = 2*ad*bd;
    double chisl1 = adbd1 - (ad1 + adbd2);
    double znam1 = pow(bd,2);
    double res1 = chisl1/znam1;
    
    cout << "Double: " << res1 << "\n";

    return 0;
}