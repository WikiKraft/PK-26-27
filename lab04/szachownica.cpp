#include <iostream>
#include <iomanip>

using namespace std;

int main() {


    int rozmiar;

    cout << "Rozmiar: ";
    cin >> rozmiar;


    for ( int w = 0; w<rozmiar; w++) {

        for ( int k = 0; k<rozmiar; k++) {
            int sum = w + k; //dla 0,0 np dodatnie a dla 1,0 juz nie a dla 1,1 tak itp i jest na zmiane
            if (sum % 2 == 0) {

                cout << "  ";
            }
            else {
                cout << "##";
            }
        }

        cout <<endl; 
    }


}
