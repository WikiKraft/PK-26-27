#include <iostream>
#include <iomanip>

using namespace std;
int suma_cyfr(int liczba){
    int suma=0;

    while(liczba>0){
        suma=suma+liczba%10;
        liczba=liczba/10;
    }
    return suma;
}
int suma_cyfr_rek(int liczba){

    if(liczba<=0){
        return 0;
    }
    
        return liczba%10 + suma_cyfr_rek(liczba/10);

}
void odwroc(int liczba){
    if(liczba>0){
    cout<<liczba%10;
    odwroc(liczba/10);
}
}

void wypisz_system(unsigned int n, int podstawa){
    if(n>=podstawa){
        wypisz_system(n/podstawa, podstawa);
    }
    cout<<n%podstawa;
}

int main(){
    int liczba,podstawa;
    cout<<"Liczba: ";
    cin>>liczba;
    cout<<"Postawa: ";
    cin>>podstawa;
    
    int suma=suma_cyfr(liczba);
    cout<<"Suma cyfr: "<<suma<<endl;

    int suma_rek=suma_cyfr_rek(liczba);
    cout<<"Suma cyfr rekurencyjnie:"<<suma_rek<<endl;

    cout<<"Kupa z dupki:";
    odwroc(liczba);
    cout<<endl;

    cout<<"Zamiana: ";
    wypisz_system(liczba,podstawa);

}