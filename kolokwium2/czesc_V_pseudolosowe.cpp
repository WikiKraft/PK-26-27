#include <iostream>
#include <iomanip>

using namespace std;

void losowe_wypisz(int* tab,int n, int zakres){
    int i=0;

    while(i<n){

        *(tab+i)=rand()%zakres;
        i++;
    }

    for(int k=0;k<n;k++){
        cout<<*(tab+k)<<" ";
    }
}

int suma(int* tab,int n){
    int suma=0;
    for(int i=0;i<n;i++){
        suma=suma+*(tab+i);

    }
    return suma;
}

float srednia(int* tab,int n){
    float sumka=suma(tab,n);
    float srednia=sumka/n;
    return srednia;
}

int parzyste(int* tab,int n){
    
}

int main(){

    int ziarno,n,zakres;
    cout<<"Ziarno: ";
    cin>>ziarno;
    cout<<"N: ";
    cin>>n;
    cout<<"Zakres: ";
    cin>>zakres;
    cout<<endl;

    srand(ziarno);

    int* tab=new int[n];
    losowe_wypisz(tab,n,zakres);
    int sum=suma(tab,n);
    cout<<endl<<"Suma: "<<sum<<endl;

    float sre=srednia(tab,n);
    cout<<"Srednia: "<<sre<<endl;
}