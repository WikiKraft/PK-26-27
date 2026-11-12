#include <iostream>
#include <iomanip>

using namespace std;


int f(int n){

    int wartosc0=0;
    int wartosc1=1;

    if (n ==0){

        return wartosc0;
    }

    if(n==1){

        return wartosc1;
    }

    return f(n-1) + f(n-2);
}

int main(){

    int n;

    cout<<"N: ";
    cin>>n;

    int wynik =f(n);
    cout<<wynik;
}