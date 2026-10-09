#include <iostream>

using namespace std;

int main() {

    int A, B, C;

    cout << "Podaj A: " << endl;
    cin >> A;

    cout << "Podaj B: " << endl;
    cin >> B;

    cout << "Podaj C: " << endl;
    cin >> C;

    cout << "A= " << A << endl;
    cout << "B= " << B << endl;
    cout << "C= " << C << endl;
    cout << "Pole: " << 2*A*B + 2*A*C + 2*B*C << endl;
    cout << "Objetosc: " << A*B*C << endl;

    return 0;

}