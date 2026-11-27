#include <iostream>
#include <iomanip>

using namespace std;

int** alokuj(int n,int m){
    int** tab = new int*[n];
    for (int i = 0; i < n; ++i) {
         tab[i] = new int[m];
    }

    return tab;
}

void wczytaj(int** tab,int h,int w){
    int licznik=1;
    for(int i=0;i<h;i++){
        for(int l=0;l<w;l++){
            tab[i][l]=licznik;
            licznik++;
        }
    
    }
}

void wypisz(int** tab,int h,int w){
    for(int i=0;i<h;i++){
        for(int l=0;l<w;l++){
            cout<<setw(2)<<tab[i][l]<<" ";
        }
        cout<<endl;
    }
}

void suma_wierszy(int** tab,int h,int w){
    
    for(int i=0;i<h;i++){
        int suma=0;
        cout<<"Suma wiersza "<<i<<": ";
        for(int l=0;l<w; l++){
            suma=suma+tab[i][l];
        }
        cout<<suma;
        cout<<endl;
    }
}

void obrot(int** tab,int h,int w){
    int** niu=new int*[w];
    {
        for (int i = 0; i < w; ++i) {
         niu[i] = new int[h];
        }
    }

    for(int i=0;i<w;i++){
        for(int l=0;l<h;l++){
            niu[i][l]=tab[h-1-l][i];
        }
    }
    cout<<"PO OBROCIE:"<<endl;
   for(int i=0;i<w;i++){

    for(int l=0;l<h;l++){
        cout<<setw(2)<<niu[i][l]<<" ";
    }
    cout<<endl;
   }

}

void zamiana(int** tab,int h,int m){

    cout<<"Po:"<<endl;

    int licznik=1;
    for(int i=(h-1);i>=0;i--){
        for(int l=0;l<m;l++){
            tab[i][l]=licznik;
            licznik++;
        }
    }

    for(int i=0;i<h;i++){
        for(int l=0;l<m;l++){
            cout<<setw(2)<<tab[i][l]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n,m;
    cout<<"N: ";
    cin>>n;
    cout<<"M: ";
    cin>>m;

    int** M=alokuj(n,m);
    wczytaj(M,n,m);
    wypisz(M,n,m);
    suma_wierszy(M,n,m);
    zamiana(M,n,m);
    
    int** g=alokuj(n,m);
    wczytaj(g,n,m);
    obrot(g,n,m);
 }
    