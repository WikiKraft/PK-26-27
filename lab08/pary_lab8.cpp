#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void losowe(int* tab, int n){
    int i=0;
    

    while(i<n){

        *(tab+i)=rand() % 100;
        i++;
    }
 
}

void wypisz (int* tab, int n) {

    int l=0;

    

    while(l<n){

        int wartosc= *(tab+l);
        cout<<setw(6)<<wartosc;
        l++;
    }
}


int main(){
    //tablice przekazujesz jako wskaznik, bo to zrobior danych kytore sa uporzadkowane przez adresy
    
    int ziarno;
    int n;
    cout<<"Ziarno: ";
    cin>>ziarno;
    cout<<"N: ";
    cin>>n;
    cout<<endl;

   srand(ziarno);

   int* tab = new int[n];
   losowe(tab, n);
   wypisz(tab, n);

    cout<<endl;

   int p=0;
   int ilosc= n-1;

   while(p<ilosc){

    cout<<setw(6)<<*(tab+p)<<setw(6)<<" "<<*(tab+p+1)<<endl;
         p++;   
   }

    delete[] tab;

    return 0;

}