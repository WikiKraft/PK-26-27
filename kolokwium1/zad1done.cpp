#include <iostream>
#include <iomanip>

using namespace std;


int main(){

    int n;
    int t1,t2,t3;


    do{

     cout <<"Liczba pomiarów:";
     cin>>n;

     if(n<=0){
        cout<<"Liczba pomiarów musi być większa od zera."<<endl;
     }

    }while(n<=0);

    
    cout<<"Podaj temperatury: ";
    for (int p=0; p<n ; p++){

        cin>>t1;

        if (p==0){
            t2=t1;
            t3=t1;
        }
        else if(t1>t2){
            t2=t1;
        }
        else if(t1<t3){
            t3=t1;
        }

    }

    if(t2==t3){
        cout <<"Wszystkie temperatury są takie same: "<<t2<<endl;
    }
    else{

        cout <<"Najwyższa temperatura: "<<t2<<endl;
     cout <<"Najniższa temperatura:"<<t3<<endl;


    }

   
}
