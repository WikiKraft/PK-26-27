#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

enum class Warunek{ FIBONACCI, KWADRAT, SZESCIAN, SILNIA };
void losowe(int* tab, int n, int zakres){

    int licznik=0;

    while(licznik<n){
        *(tab+licznik) = rand() %zakres+1;
        licznik++;
    }
}

void wypisz (int* tab, int n) {

    int l=0;
    
    while(l<n){

        int wartosc= *(tab+l);
        cout<<wartosc;
        if(l<(n-1)){
            cout<<", ";
        }
        l++;
    }
}

void wypisz_p (int* pierwsze,int ilosc) {

    int l=0;
    
    while(l<ilosc){

        int wartosc= *(pierwsze+l);
        cout<<wartosc;
        if(l<(ilosc-1)){
            cout<<", ";
        }
        l++;
    }
}

int max(int* tab, int n){

    int maks= *tab;

    for(int i=0; i<n; i++){

        int niu= *(tab+i);

        if(niu > maks){

            maks=niu;
        }
    }

    return maks;
}

int min(int* tab, int n){

    int min= *tab;

    for(int i=0; i<n; i++){

        int niu= *(tab+i);

        if(niu < min){

            min=niu;
        }
    }

    return min;
}

int suma(int* tab, int n){

    int suma=0;
    int i=0;

    while(i<n){

        int niu=*(tab+i);
        suma=suma+niu;
        i++;
    }

    return suma;
}

int liczby_pierwsze(int* tab, int n, int* pierwsze){

    
    int dzielnik=2;
    int i=0;
    int ilosc=0;
    int licznik=0;
    while(i<n){
        bool czy_pierwsze=true;

         int aktualne=*(tab+i);\
    
        while(dzielnik<=sqrt(aktualne)){

            if(aktualne % dzielnik == 0 && aktualne!=dzielnik && aktualne>dzielnik || (aktualne==0 || aktualne==1)){
                czy_pierwsze=false;
            }
        dzielnik++;

    }

    dzielnik=2;

    if(czy_pierwsze==true){
            ilosc++;
           *(pierwsze+licznik)=aktualne;
            licznik++;
        }

    i++;

}

    return ilosc;
}

bool czy_kwadrat(int akt){

    if(akt<0){
        return false;
    }

    int kwadrat=sqrt(akt);

    if(kwadrat*kwadrat==akt){
        return true;
    }
    else{
        return false;
    }

}

bool czy_szescian(int akt){

    for(int i=0; i<=akt; i++){
        int szescian=i*i*i;

        if(szescian==akt){
            return true;
        }

    }

    return false;
}

bool czy_fibo(int akt){
    int f0=0;
    int f1=1;
    int f=0;

    do{
        f=f0+f1;
        if(akt==f){
            return true;
        }
        f0=f1;
        f1=f;
    }
    while(f<akt);

    return false;
}

bool czy_silnia(int akt){
    int silnia1=1;
    if(akt==1){
        return true;
    }
    int silnia2=2;
    int silnia;
    do{

        silnia=silnia1*silnia2;
        if(silnia==akt){
            return true;
        }
        silnia2++;
        silnia1=silnia;  
    }while(silnia<akt);
    return false;

return false;
}


void wypisz_warunkowo (int* tab, int n, Warunek w){

    for(int i=0; i<n; i++){

        int aktualne=*(tab+i);
        bool spelnia = false;

        switch(w){

            case Warunek::KWADRAT:
                spelnia=czy_kwadrat(aktualne);
                break;
            case Warunek::SZESCIAN:
                spelnia=czy_szescian(aktualne);
                break;
            case Warunek::SILNIA:
                spelnia=czy_silnia(aktualne);
                break;
            case Warunek::FIBONACCI:
                spelnia=czy_fibo(aktualne);
                break;


        }

        if(spelnia==true){
                cout<<tab[i]<<", ";
            }

        
    }
}

int main(){

    int ziarno;
    int n;
    int zakres;
    cout<<"Ziarno: ";
    cin>>ziarno;
    cout<<"N: ";
    cin>>n;
    cout<<"Zakres: ";
    cin>>zakres;

    int* tab = new int[n];
    int* pierwsze = new int[n];
    srand(ziarno);

    losowe(tab,n,zakres);
    cout<<"[";
    wypisz(tab,n);
    cout<<"]"<<endl;

    int makss= max(tab,n);
    cout<<"Maksimum: "<<makss<<endl;

    int minn= min(tab,n);
    cout<<"Minimum: "<<minn<<endl;

    int sum= suma(tab,n);
    cout<<"Suma: "<<sum<<endl;

    int ile_pierwszych = liczby_pierwsze(tab,n,pierwsze);
    cout<<"Liczby pierwsze: ";
    wypisz_p(pierwsze,ile_pierwszych);
    cout<<endl;

    cout << "Kwadraty liczb: ";
    wypisz_warunkowo(tab, n, Warunek::KWADRAT);
    cout<<endl;

    cout << "Sześciany liczb: ";
    wypisz_warunkowo(tab, n, Warunek::SZESCIAN);
    cout<<endl;

    cout<<"Silnie liczb: ";
    wypisz_warunkowo(tab, n, Warunek::SILNIA);
    cout<<endl;

    cout<<"Liczby z ciągu Fibonacciego: ";
    wypisz_warunkowo(tab, n, Warunek::FIBONACCI);
    cout<<endl;

    delete[] tab;
    delete[] pierwsze;

}