#include <iostream>
#include <iomanip>

using namespace std;

void min_max(int* tab,int n, int* min, int* max){
    *min=*tab;
    *max=*tab;
    for(int i=0; i<n;i++){
        if(*(tab+i)<*min){

            *min=*(tab+i);
        }
        if(*(tab+i)>*max){

            *max=*(tab+i);
        }
    }
    cout<<"Minimum: "<<*min<<endl;
    cout<<"Maksimum: "<<*max;
}

void pary(int* tab, int n){
    for(int i=0;i<(n-2);i++){
    
        
        int pierwszy=*(tab+i);
        int drugi=*(tab+1+i);
        int trzeci=*(tab+2+i);
            
        if(*(tab+i)<*(tab+1+i)){
         cout<<*(tab+i)<<" "<<*(tab+1+i)<<endl;
        }
        
    }
}

void kopiuj(int* zrodlo, int* cel, int n){

    for(int i=0;i<n;i++){

        *(cel+i)=*(zrodlo+i);
        cout<<*(cel+i)<<" ";
    }
}

void odwroc(int* poczatek, int* koniec){
    
    if(poczatek==koniec){
        cout<<*poczatek;
    }
    else if(koniec>poczatek){
        cout<<*koniec;
        odwroc(poczatek,koniec-1);
    }
}

int main(){

    int n;
    cout<<"N: ";
    cin>>n;

    int* tab=new int[n];

    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        *(tab+i)=k;
    }
    cout<<endl;

    for(int j=0;j<n;j++){
        int l=*(tab+j);
        cout<<l<<", ";
    }
    int suma=0;
    for(int i=0; i<n; i++){
        suma=suma+*(tab+i);
    }
    cout<<endl;

    cout<<"Suma: "<<suma<<endl;

    int min_val;
    int max_val;
    min_max(tab,n,&min_val,&max_val);
    cout<<endl;

    int* poczatek=tab;
    int* koniec=(tab+(n-1));
    cout<<"Odwrocone:";
    odwroc(poczatek,koniec);

    cout<<endl;
    cout<<"Pary:";
    pary(tab,n);

    int* cel=new int[n];
    kopiuj(tab,cel,n);

}