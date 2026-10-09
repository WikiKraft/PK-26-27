#include <iostream>

using namespace std;

int main() {
    char znak;
    int kod_dec;

    cout << "Podaj znak: " << endl;
    cin >> znak;

    kod_dec = static_cast<int>(znak);

    cout << "Znak: " << "'" << znak << "'" << endl;
    cout <<  "Kod: " << kod_dec << " (" << showbase << hex << kod_dec <<  ")" << endl;

    return 0;

}
