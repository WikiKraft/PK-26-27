#include <iostream>
#include <iomanip>

using namespace std;

long silnia(int n){

    if (n==0){

        return 1;
    }

    return n * silnia(n-1);

}


int main(){

    int n;

    cout<<"N: ";
    cin>>n;

    if (n<0){

        cout<<"N musi być nieujemne ";
        return 0;
    }

    long wynik=silnia(n);

    cout<<"Silnia= "<< wynik;


}