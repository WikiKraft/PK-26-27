// ConsoleApplication49.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <iomanip>

using namespace std;

// na podstawie pliku tablice statyczne i dynamiczne stwórz dwie tablice dynamiczne A i B, odpowiednio o wymiarach M x N i N x M
// rozpisz sobie ręcznie tablicę A na kartce, wypełnioną kolejnymi wartościami; następnie samodzielnie transponuj ją na kartce
// do danych wartości dopisz sobie ołówkiem indeksy (współrzędne)... w jakich wsp. jest np.: wartość 3 w tablicy A, a w jakich jest w tablicy B?
// zrób to dla kilku wartości. Powinieneś zauważyć pewną zależność...
// jeśli zauważyłeś - gratulacje, masz rozwiązane zadanie.

// napisz funkcję, do transpozycji macierzy. Funkcja ma przyjmować 4 argumenty, dwie macierze dynamicznie utworzone w main i rozmiar M i N.
// jesli chcesz mozesz dopisac funckje, ktora bedzie uzupelniac macierz A i funkcje ktora bedzie wyswietlac przekazana w parametrze macierz

// do drukowania wartosci na "polu o szerokości 6" służy funkcja setw(szerokosc) -> czyli setw(6)

int** alokuj(int wiersze, int kolumny){

    int** tb = new int* [wiersze];
    for (int i = 0; i < wiersze; i++) {
        tb[i] = new int[kolumny];
    }
    return tb;
}

void wypelnij(int** tb, int wiersze, int kolumny){

    int licznik=1;
    for (int i=0; i<wiersze; i++ ){
        for(int j=0; j<kolumny; j++){
            tb[i][j]= licznik++;
            
        }
    }
}

void zwolnij(int wiersze, int** tab){

    for(int i=0; i<wiersze;i++){
        delete[] tab[i];
    }
    delete[] tab;
}

void wypisz(int** tab, int wiersze, int kolumny){

    for(int i=0; i<wiersze; i++){ 
        for (int j = 0; j < kolumny; j++) {
            cout << setw(6) << tab[i][j];
        }
        cout << endl;
    }

}

void trans(int**A, int** B, int m ,int n){
    for(int i=0; i<m; i++){ 
        for (int j = 0; j < n; j++) {
           B[j][i]=A[i][j];
        }
        
    }

}

int main()
{
    int m, n;
    // wczytanie wymiarów M N   
    cout<<"N: ";
    cin>>n;
    cout<<"M: ";
    cin>>m;

    int** A=alokuj(m,n);
    int** B=alokuj(n,m);

    wypelnij(A,m,n);
    trans(A,B,m,n);

    cout << "A:" << endl;
    wypisz(A, m, n);

    cout << "B:" << endl;
    wypisz(B, n, m);

    zwolnij(m,A);
    zwolnij(n,B);


}


