#include <iostream>
#include <iomanip>

//zrobione
using namespace std;

int main(){

    double w, wyn;
    int j;


    cout<<"Podaj wartość ciśnienia: ";
    cin>>w;

    if(w<0){
        cout<<"Wartość nie może być ujemna.";
    }

    cout<<"Podaj jednostkę [1] kPa [2] hPa:";
    cin>>j;

    if (j==1){

        wyn = w * 10.00;

        cout<<fixed<<setprecision(2)<<w<<" kPa = "<<wyn<<" hPa";

        return 0;


    }
    else if (j==2){

        wyn = w/10.00;

        cout<<fixed<<setprecision(2)<<w<<" hPa = "<<wyn<<" kPa";

        return 0;
    }
    else {

       cout <<"Niepoprawny wybór jednostki." ;
       return 1;
    }

    

}