#include <iostream>

#include <cstdlib>

using namespace std;




int main(){

    int i;
    int N;
    int factorial =1;

    cin>>N;
    for (i=N; i>=1; i--){
        factorial*=i;
    }
cout <<"El numero factoria de "  <<  N << " es: " << factorial <<endl;

return 0;

}
