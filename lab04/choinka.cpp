#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int h;

 cout << "Podaj wysokosc: ";
 cin >> h;
 int il_g = 1, il_spacji = h-1;

 for ( int w = 0; w < h; w++) {
    
    for( int s = 0; s < il_spacji ; s++ ) {

        cout << " ";

    }

    for(int l = 0; l < il_g; l++ ) {

        cout << "*";
    }

    cout<<endl;

    il_spacji--;
    il_g = il_g +2;


}
}