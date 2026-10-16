#include <iostream> 
#include <iomanip>

using namespace std;

int main () {
  
    int N, A;
    
    cout << "N: " << endl;
    cin >> N;

  if ( N < 0 ) {

        cout << "N musi być większe niż 0" << endl;

        return 1;
  }

    cout << "A: " << endl;
    cin >> A;

    if ( A < 0 ) {

        cout << "A nie jest liczbą naturalna" << endl;

        return 1;

    }

    int S=A;

    for (int i = N; i > 1; i--) {

        A++;
        S = S + A;
    
    }

    cout << "Suma: " << S << endl;

    return 0;


}

  