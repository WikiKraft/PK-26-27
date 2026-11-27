#include <iostream>
#include <iomanip>

using namespace std;

int szukaj(int* tab, int lewy, int prawy, int szukana){
    if(lewy>prawy){
        return -1;
    }

    int srodek=(prawy-lewy)/2 +lewy;

    if(tab[srodek]==szukana){
        return srodek;
    }

    if(tab[srodek]<szukana){
        return szukaj(tab,srodek+1, prawy,szukana);
    }
    else{
        return szukaj(tab,lewy,srodek-1,szukana);
    }

}

int maksimum_rek(int* tab, int n){
    
    int maks,pot;

    if(n==1){
        return *tab;
    }
    maks=*tab;
    pot=maksimum_rek(tab+1,n-1);

    if(pot>=maks){
        maks=pot;
    }
    return maks;
}
int main(){
    int n;
    cout<<"N:";
    cin>>n;

    int* tablica = new int[n];

    cout<<"Tablica: ";

    for(int i=0; i<n; i++){
        cin>>tablica[i];
    }

    int maksi=maksimum_rek(tablica,n);
    cout<<"Maksimum: "<<maksi<<endl;

    delete[] tablica;

    int N, szukana;
    cout<<"N: ";
    cin>>N;
    int* tab = new int[N];
    cout<<"Tablica: ";

    for(int i=0; i<n; i++){
        cin>>tab[i];
    }
    cout<<"Szukana: ";
    cin>>szukana;

    int ind=szukaj(tab,0,n-1,szukana);
    cout<<"Indeks: "<<ind;

}