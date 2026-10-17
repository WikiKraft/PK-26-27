#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int N, a;

    cout << "N: ";
    cin >> N;

    cout << "A: ";
    cin >> a;

    int liczba_a = 1;
    
    int maks = a;

    while ( liczba_a < N) {
        cout << "A: ";
         cin >> a;
         liczba_a++;

         if ( a > maks ) {

            maks = a;
         }

    }
    cout << "Maximum: " << maks << endl;



    
}