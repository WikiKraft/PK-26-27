#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int h,a;

    cout << "Podaj wysokość:"; 
    cin>>h;
    cout << "Podaj długość:";
    cin>>a;

    if(h<=0 || a<=0) {
        cout <<"Niepoprawna wartosc"<<endl;

        return 1;
    }
    
    for (int i=0; i<h; i++){

        if(i==0){

            for (int l=0; l<a; l++){

            cout << "_";}
        }
        else if(i==(h-1)){

            cout<<endl;

            for (int k=0; k<a; k++){

            cout << "‾";}
        }
        else{

            cout<<endl;
        cout<<"│";

        for (int s=0; s<(a-2); s++){
            cout << " ";
        }

        cout<<"│";
        }

    }

    cout<<endl;
    cout<<"│";

}
 