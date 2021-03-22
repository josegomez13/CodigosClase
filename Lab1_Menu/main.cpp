#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    unsigned short ejercicio, num_ing, num_rand, cont=0, n,div, i;
    unsigned int A, B, C, max, min1, min2, num_trian;
    unsigned long long int fact;
    double e;
    float resultado=0,pi=3.1416, perimetro, area;
    int N,x=1;

    cout << "Ingrese el numero del ejercicio " << endl;
    cin >>ejercicio;

    switch (ejercicio)
    {
    case 6:
        cout << "Ingrese la base:" << endl;
        cin >> A;
        cout << "Ingrese el exponente:" <<endl;
        cin >> B;

        while (x<B)
        {
            if(resultado<A)
            {
                resultado=A*A;
            }
            else
            {
                resultado=resultado*A;
            }

            x++;
        }

        cout <<"El Exponente de " << A <<" elevado a la "  << B << " es:  " << resultado<<endl;

     break;

    case 7:

       cout << "Ingrese un numero " <<endl;
       cin >> N;
        resultado=(N*N+1)/2;
        cout << "La suma desde 0 hasta " << N <<  " es: " << resultado<<endl;

        break;

     case 8:

        cout << "Ingrese el numero factorial" <<endl;
        cin >> N;

        fact=1;
        for(i=N; i>=1; i--){
            fact *= int(i);

            }
        cout <<"El numero factoria de "  <<  N<<"!" << " = " << fact <<endl;
        break;

    case 9:

        cout <<"Ingrese el radio del circulo" <<endl;
        cin >> e;
        perimetro=pi*2*e;
        area=pi*e*e;
        cout <<"Perimetro: "<< perimetro <<endl;
        cout <<"Area: "<< area <<endl;

        break;

    case 10:

        cout <<"Ingrese un numero"<<endl;
        cin>>N;
        for(i=1;i<=N;i++)
        {
            if (max % i == 0)
                max++;
        }
         cout<<"Multiplos de: " << N << " menores que 100: "<< i <<endl;

        break;

    case 26:
        cout <<"ingrese los lados A, B y C del triangulo a analizar: ";
        cin >> A >> B >> C;

        if(A > B && A > C)
        {
            min1=B;
            min2=C;
            max=A;
        }
        else if (B>A && B> C)
        {
            min1=A;
            min2=C;
            max=B;
        }

        else
        {
            min1=B;
            min2=A;
            max=C;
        }

        if (min1+min2>max){
            if (A==B && A==C) cout <<"El triangulo es equilatero" <<endl;
            else if (A!=B && A!=C && B!=C) cout<<"El Triangulo es escaleno"<<endl;
            else cout <<"El trinagulo es isoceles " << endl;
        }
        break;

     case 30:
        srand(time(NULL));
        num_rand=rand()%101;
        do{
            cout <<"Ingrese un numero: " << endl;
            cin >> num_ing;
            if (num_ing > num_rand)cout <<"el numero ingresado es mayor" <<endl;
            else if (num_ing < num_rand) cout <<"EL numero ingresado es menor" << endl;
            cont++;
        } while (num_ing!=num_rand);
        cout<<"el numero aleatorio fue adivinado y es: " <<num_rand << " Y tardo " << cont << "Intentos en adivinarlo" << endl;
        break;

        // problema 6
        case 36:

        cout << "Ingrese el numero de termino de la aproximacion: " << endl;
        cin >> n;
        for (unsigned short i=0; i < n; i++)
        {
            fact=1;
            for(unsigned short j=i; j>=2; j--)
                fact *= j;
                e += 1.0/fact;
        }
        cout << "La aproximacion de e con " << n << " cifras es e=" << e << endl;

        /*
        cout << "ingrese un numero para calcular el factorial: ";
        cin >> n;
        fact=1;
        for(unsigned short i=n; i>=2; i--){
            fact *= int(i);
        }
            cout << "El factoria de " << n << " es " << fact << '!' << endl;
*/
    break;


    case 47:
        cout<<"Ingrese un numero k par saber cual es el primer numero triangular con mas de k divisores" <<endl;
        cin>>n ;
        A=1;
        do{
         num_trian=A*(A+1)/2;
         div=0;
         for(unsigned short i=1;i<=num_trian ;i++) if(num_trian%i==0) div++;
          A++;

          }while(div <= n);
        cout<<"El primer numero triangular con mas de  " << n << "divisores es: " << num_trian << endl;
    break;



    default:
    cout << "el ejercicio ingresado no existe" << endl;
    break;
    }
    return 0;
}
