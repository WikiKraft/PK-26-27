#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double EPS = 0.001;           // Epsilon to dokładność z jaką chcemy znaleźć miejsce zerowe
    const int MAX_N = 100;


double wartoscWielomianu(double x,double wsp[],int n){

    double wynik = 0;

    for (int i=0; i<=n; i++){

        wynik=wynik+wsp[i]*pow(x,i);
    }
    return wynik;
    

}

double bisekcja(double a, double b, double wsp[], int n){

    
    double c;
    c=(a+b)/2;

    if(abs(b-a)<EPS){

        return c;
    }
    double w1=wartoscWielomianu(a,wsp,n);
    double w2=wartoscWielomianu(c,wsp,n);

    double znak=w2*w1;

    if (znak<=0){


        return bisekcja(a,c,wsp,n);


    }
    else {
        return bisekcja(c,b,wsp,n);
    }



    
}

bool ma_miejsce(double a,double b, double wsp[], int n){


    double w1=wartoscWielomianu(a,wsp,n);
    double w2=wartoscWielomianu(b,wsp,n);

    double znak=w2*w1;

    if (znak<=0){

        return true;

    }
    else {
        return false;
    }

}

int main(){


    double wsp[MAX_N];

    double a, b;
    int n;
    int l;

    cout<<"a: ";
    cin>> a;
    cout<<"b: ";
    cin>>b;
    cout<<"n: ";
    cin>>n;

    for (int i=0; i<=n; i++){

        cout<<"X"<<i<<":";
        cin>>l;
        wsp[i]=l;
    }

    if (ma_miejsce(a,b,wsp,n)==false){

        cout<<"Brak miejsca zerowego w zadanym przedziale"<<endl;

        return 0;
    }

   double xzerowe=bisekcja(a,b,wsp,n);

   double yzerowe = wartoscWielomianu(xzerowe,wsp,n);
   if(abs(yzerowe)<EPS){
        cout<<fixed<<setprecision(3)<<xzerowe;
   }
   else{

       cout<<"Brak miejsca zerowego";
   }
}