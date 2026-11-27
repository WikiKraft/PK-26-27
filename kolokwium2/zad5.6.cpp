#include <iostream>
#include <iomanip>
using namespace std;

int suma_rek(int n){
   if(n<0){
    return 0;
   }
   return n+suma_rek(n-1);
}

long long potega(int a,int n){
    if(n<1){
        return 1;
    }
    
    return a*potega(a,(n-1));
}

int main(){

    //do sumy:
    int n;
    cout<<"N: ";
    cin>>n;
    int suma=suma_rek(n);
    cout<<"Suma: "<<suma<<endl;

    int pod,wyk;
    cout<<"Podstwa: ";
    cin>>pod;
    cout<<"Wykładnik: ";
    cin>>wyk;
    long wyn=potega(pod,wyk);
    cout<<"Wynik: "<<wyn;
}