// ConsoleApplication49.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
// slimak

// zauważ jak poruszamy sie po tablicy:
// top = 0;
// bottom = N - 1;
// lewo = 0;
// prawot = M - 1;


// warunkiem stopu może być wartość wpisywana do tablicy, bo mamy wpisywać od 1... do zapełnienia wszystkich komórek
// czyli wartość maksymalna to M * N

// stwórz pętlę główną z warunkiem stopu, np while
// w while stwórz cztery osobne fory do poruszania się top, prawo, bottom, lewo
// po wyjsciu z forów odpowiednio inkrementuj lub dekrementuj tom/bottom/prawo/lewo


int main()
{
    int m, n;
    // wczytanie wymiarów M N   
    cout<<"N: ";
    cin>>n;
    cout<<"M: ";
    cin>>m;

    int top=0;
    int bottom=n-1;
    int lewo=0;
    int prawo=m-1;
    int max= n*m;
    int licznik=1;

    int** tab=new int*[n];

    for (int i = 0; i < n; i++) {
        tab[i] = new int[m];
    }




    while(licznik<=max){//pan prawo

        for(int i=lewo; i<=prawo && licznik<=max; i++){
            tab[top][i] = licznik++;
        }

        top++;
    

    //pan dol

        for(int i=top; i<=bottom && licznik<=max; i++){

            tab[i][prawo] = licznik++;
        }
        prawo--;
    

     //pan lewo
        for(int i=prawo; i>= lewo && licznik<=max; i--){

            tab[bottom][i]=licznik++;
        }
        bottom--;
    

    //gora lewa strona
        for(int i=bottom; i>= top; i--){

            tab[i][lewo]=licznik++;
        }

        lewo++;

    }

    for (int l=0; l<n; l++){

        for (int j=0; j<m; j++){
            cout<< setw(6)<<tab[l][j];
        }

        cout<<"\n";
    }


    for (int i = 0; i < n; i++) {
        delete[] tab[i];
    }
    delete[] tab;


    return 0;
}


