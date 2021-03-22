#include <iostream>
#include <math.h>

#include <iomanip>
using namespace std;

int main()
{
    double A,B, resul;
    cout << "Digite el dividendo:" <<endl;
    cin >> A ;
    cout << "Digite el divisor:" <<endl;
    cin >> B;
    resul= A/B;
    cout << fixed << setprecision(0.1) << resul << endl;

    return 0;
}
