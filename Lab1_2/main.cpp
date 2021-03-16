#include <iostream>

using namespace std;
//Escriba un programa que pida un número N e imprima en pantalla si es par o impar.


int main()
{
    int N=0;
    cout << "Ingrese un numero N" << endl;
    cin >> N;

   // N=div(N,2)
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
