#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int R;
    float pi = 3.14, obwod, pole;

    cout << "Podaj promien: " << endl;
    cin >> R;

    obwod = 2*pi*R;
    pole = pi*R*R;

    cout << fixed << setprecision(2);
    cout << "R= " << R << endl;
    cout << "Obwod: " << obwod << endl;
    cout << "Pole: " << pole << endl;

    return 0;

}