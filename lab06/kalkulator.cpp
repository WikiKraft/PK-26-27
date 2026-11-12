#include <iostream>
#include <iomanip>

using namespace std;


float dodaj(float a, float b){

    return (a+b);
}
float odejmij(float a, float b){

    return (a-b);
}
float pomnoz(float a, float b){

    return (a*b);
}
float podziel(float a, float b){

    return (a/b);
}

int main(){

    float a;
    float b;
    char z;
    float w;

    cout<<"Działanie: ";
    cin>>a>>z>>b;

    switch(z){

        case '+':

        w=dodaj(a,b);
        break;

        case '-':

        w=odejmij(a,b);
        break;

        case '/':
        w=podziel(a,b);
        break;

        case '*':
        w=pomnoz(a,b);
        break;

        default:
        cout<<"Nieprawidłowe działanie";

        return 0;

    }

    cout<<"Wynik: "<<w;
}