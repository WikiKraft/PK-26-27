#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n, fnext, fn;
    int f0=0;
    int f1=1;

    cout<<"Podaj liczbe rządu: ";
    cin>>n;

    if(n<1){
        cout <<"Niepoprawna liczba!";
        
        return 1;
    }

    for(int c=2; c<=n; c++){


        fn=(c-1)+(c-2);
        



    }


    cout<<fnext;
}