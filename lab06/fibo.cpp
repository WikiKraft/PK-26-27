#include <iostream>

using namespace std;

int fib(int liczba){

    int f0=0;
    int f1=1;
    int f=0;

    do {


        f=f0+f1;

        f0=f1;
        f1=f;

    }
    while (f<=liczba);


    return f;


}

int main(){

    cout<<"Podaj wartość: ";

    int liczba;

    cin>> liczba;

    if(liczba<0){
        cout<<"Wartość nie może być ujemna";
        return 1;
    }

    int fibo = fib(liczba);

    cout<<"Następny wyraz ciągu to "<<fibo;
}