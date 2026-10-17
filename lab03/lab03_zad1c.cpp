#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    char j;
    float temp, Tf, Tc, Tk;

    cout << "Jednostka: ";
    cin >> j;
    
    cout << "Temperatura: ";
    cin >> temp;

    if ( j == 'C' ) {

        Tc = temp;
        Tf = (Tc*9/5)+32;
        Tk = Tc + 273.15;

    }
    else if ( j == 'F') {

        Tf = temp;
        Tc = (Tf-32)*5/9;
        Tk = Tc + 273.15;
    }
    else if ( j == 'K') {

        Tk = temp;
        Tc = Tk - 273.15;
        Tf = (Tc*9/5)+32;
    }
    else {

        cout << "Nieprawidlowa jednostka";

        return 1;
    }
    cout << fixed << setprecision(2);
    cout << "F = " <<  Tf << endl;
    cout << "C = " << Tc << endl;
    cout << "K = " << Tk << endl;

    return 0;

}