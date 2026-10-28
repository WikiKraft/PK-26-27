#include <iostream>
#include <iomanip>

using namespace std;

int main() {
//program wysiwtla po kolei liczby

int kolumny, wiersze;
int nr_k = 1;

cout << "Podaj wiersze: ";
cin >> wiersze;
cout << "Podaj kolumny: ";
cin >> kolumny;

for ( int w = 0; w < wiersze; w++) {

    for (int k =0; k<kolumny; k++) {

        cout << nr_k << " ";
        nr_k++;

        
    }

    cout<<endl;
}


}
