#include <iostream>
#include <iomanip>

using namespace std;


 void s(int l, int p){
    
    if(l>=p){

        s(l/p,p);
    }

    int reszta = l%p;
    cout<<reszta; 
}

void label(int p){
    switch(p)
    {
        case 2: "Binarne";
        break;
        case 5: "Piatkowy: ";

    }
   
}

int main(){

    int n;
    
    

    cout<<"N: ";
    cin>>n;

    label(2);
    s(n,2);
    cout<<endl;

    label(5);
    s(n,5);

}

