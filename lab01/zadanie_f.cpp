#include <iostream>
#include <iomanip>

using namespace std;

int main() {

   float P, R;
   int T;
   float I;

    cout << "P: " << endl;
    cin >> P;
    cout << "T: " << endl;
    cin >> T;
    cout << "R: " << endl;
    cin >> R;


    cout << fixed << setprecision(2);

    I = (P*T*R)/100;
    cout << "Wynik rzeczywisty: " << I << endl;
    cout << "Wynik całkowity: " << static_cast<int>(I) << endl;

    return 0;
}