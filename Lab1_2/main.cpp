#include <iostream>

using namespace std;
//Escriba un programa que pida un número N e imprima en pantalla si es par o impar.


int main()
{
    int N=0;
    cout << "Ingrese un numero N" << endl;
    cin >> N;

   // Se Usa el operador modulo para indicar si el numero es par o impar; si el residuo es 0 el numero es par
    if (N % 2==0)
    {

     cout <<"El numero " << N << " es par " << endl;
    }
    else
    {

         cout <<"El numero " << N << " es impar " << endl;
    }
    return 0;
}
