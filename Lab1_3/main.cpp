#include <iostream>

using namespace std;

// programa que pida dos números A y B e imprima en pantalla el mayor.

int main()
{
    int A, B = 0;
    cout << "Ingrese el numero A " << endl;
    cin >> A;
    cout << "Ingrese el numero B " << endl;
    cin >> B;

    if (A>B)
    {
        cout <<"El numero mayor es: "<< A << endl;
    }
    else
    {
        cout << "El numero mayor es: " << B << endl;
    }

    return 0;
}
