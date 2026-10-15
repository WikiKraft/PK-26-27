#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float x;

    cout << "Wpisz liczbe punktow z kolokwium: " << endl;

    cin >> x;

    if ( x >= 0.0f && x <= 4.4f ) {

        cout << "Uzyskana ocena to niedostateczny (2.0) " << endl;
    }
    else if ( x >= 4.5f && x <= 5.2f ) {

        cout << "Uzyskana ocena to dostateczny (3.0)" << endl;

    }
    else if ( x >= 5.3f && x <= 6.2f ) {

        cout << "Uzyskana ocena to ponad dostateczny (3.5)" << endl;

    }
    else if ( x >= 6.3f && x <= 7.2f ) {

        cout << "Uzyskana ocena to dobry (4.0)" << endl;

    }
    else if ( x >= 7.3f && x <= 8.2f ) {

        cout << "Uzyskana ocena to ponad dobry (4.5)" << endl;

    }
    else if ( x >= 8.3f && x <= 9.0f ) {

        cout << "Uzyskana ocena to bardzo dobry (5.0)" << endl;
    }
    else {

        cout << "Nieprawidlowa liczba punktow!" << endl;
    }

    return 0;

    
}