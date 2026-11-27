#include <iostream>
#include <iomanip>
using namespace std;

int policz_cyfre(int liczba, int d){
    int ilosc=0;
    while(liczba>0){
        int current=liczba%10;
        if(current==d){
            ilosc++;
        }
        liczba=liczba/10;
    }

    return ilosc;
}

bool czy_doskonala(int n){
    int suma=0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            suma=suma+i;
        }
    }
    if(suma==n){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int d,liczba;
    cout<<"Liczba:";
    cin>>liczba;
    cout<<"Cyfra: ";
    cin>>d;
    int ilosc=policz_cyfre(liczba,d);
    cout<<"Liczba wystąpień: "<<ilosc<<endl;
    
    bool czy=czy_doskonala(liczba);
    
    if(czy==true){
        cout<<"Liczba doskonała";
    }
    else{
        cout<<"Liczba nie jest doskonała";
    }
}