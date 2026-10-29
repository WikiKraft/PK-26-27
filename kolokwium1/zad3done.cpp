#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n;

    cout <<"Podaj rozmiar: ";
    cin>>n;
    
    int leka=(n-1)/2 ;

    if(n<3 && n>21){
        cout <<"Nieprawidłowy rozmiar.";
        return 1;
    }
    else if(n % 2==0){
        cout <<"Nieprawidłowy rozmiar.";
        return 1;
    }

    for (int r=0;r<n;r++){

        if (r==leka){

            for(int gl=0;gl<n;gl++){
                cout<<"+";
            }
            cout<<endl;
        }
        else {

            for (int k=0; k<n; k++){

                if(k==leka){
                    cout<<"+";
                }
                else {

                    cout<<".";


                }
                    
                

            }

        cout<<endl;
        
        }
        

    }
}