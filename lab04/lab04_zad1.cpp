#include <iostream>
#include <iomanip>

using namespace std;

int main() {


    int p, w;
    long int wynik;

    cout << "Podstawa: ";
    cin >> p;
    cout << "Wykładnik: ";
    cin >> w;

    wynik = p;



    if (w<0) {

        cout << "Wykładnik nie może być ujemny" << endl;

        return 1;
    }

    for (int i = 1; i< w; i++ ) {

        wynik = wynik * p;

    }

    cout << "wynik: " << wynik << endl;


    return 0;
}