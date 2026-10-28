#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int wartosc;

    //wymieN wartosci od 0 do tego

    cout << "Podaj wartosc: ";
    cin >> wartosc;

    for (int i = 0; i <= wartosc; i++) {

        cout <<i << endl;
    }
cout << endl;
    for (int i = wartosc; i>= 0; i--) {

        cout << i << endl;
    }
    
    cout << endl;
    
    for (int i = 0; i <= wartosc; i = i+2) {

        cout << i << endl;
    }


return 0;


}