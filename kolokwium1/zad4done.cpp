#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    //udane.
  int A, B, suma;
    cout<<"Podaj A: ";
    cin>>A;
    cout<<"Podaj B: ";
    cin>>B;

    if(A>B){
        cout<<"Błąd: A musi być mniejsze lub równe B.";

        return 1;
    }
    else if(A<=0 && B<=0){

        cout<<"Błąd, zabij sie";

        return 1;
    }
    
    suma=0;

    for (int x=A; x<=B; x++){


        if(x%3 == 0 && x%2 != 0){

            suma=suma+x;
        }



    }

    if(suma ==0){
        cout<<"Brak liczb spełniających warunek.";
    }
    else{

        cout<<"Suma liczb nieparzystych i podzielnych przez 3 z przedziału wynosi: "<<suma<<endl;
    }
}