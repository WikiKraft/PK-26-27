#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    int N;

    cout << "N: ";
    cin >> N;

    if ( N < 0 ) {

        cout << "N musi być nieujemne" << endl;

        return 1;
    }

    int silnia = 1;

    for ( int i = N; N > 0; N--) {
       silnia = silnia * N;

    }

    cout << "Silnia: " << silnia << endl;

    return 0;


}