#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int v;

    cout << "Prędkość: ";
    cin >> v;

    if(v<0) {

        cout<< "Prędkość nie może być ujemna";
        
        return 1;
    }
    else if(v>=0 , v<=10) {

        cout << "Mandat wynosi 50 PLN"<<endl;

    }
    else if(v>=11, v<=20) {

        cout <<"Mandat wynosi 100 PLN"<<endl;
    }
    else {

        switch(v) {

            case 21:
            cout << "Mandat wynosi 110 PLN"<<endl;
            break;

            case 22:
            cout <<"Mandat wynosi 120 PLN"<<endl;
            break;

            case 23:
            case 27:
            case 29:
            cout <<"Mandat wynosi 140 PLN"<<endl;
            break;

            case 24:
            case 25:
            case 28:
            cout <<"Mandat wynosi 150 PLN"<<endl;
            break;

            case 26:
            cout<<"Mandat wynosi 145 PLN"<<endl;
            break;

            default:
            cout<<"Mandat wynosi 200 PLN"<<endl;



        }
    }

    
    return 0;
  
}