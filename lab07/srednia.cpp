#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int rozm_tabu;

    double* tab = new double[rozm_tabu];
    double ocena, suma=0;

    cout<<"Podaj rozmiar: "<<endl;
    cin>>rozm_tabu;

    cout<<"Podaj liczbe"<<endl;
    

    for (int i=0; i<rozm_tabu; i++){

        cin>>ocena;
        tab[i]=ocena;

        suma+=tab[i];

        
    }

    double srednia=suma/rozm_tabu;
    cout<<srednia;


}