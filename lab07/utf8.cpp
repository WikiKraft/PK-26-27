// ConsoleApplication49.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

// Napisz FUNKCJE, które odpowiednio zamieniają tekst
// Masz przykład w funkjci main, przenieś go do odpowiedniej własnej funkcji, dopisz 

void polskiNaMaly(char &b1, char &b2){
    unsigned char u1 = (unsigned char)b1;
    unsigned char u2 = (unsigned char)b2;

    if (u1 == 0xC4) {
        if (u2 == 0x84){
             b2 = 0x85; // Ą -> ą
        }
        else if (u2 == 0x86){
             b2 = 0x87; // Ć -> ć
        }
        else if (u2 == 0x98) {
            b2 = 0x99; // Ę -> ę
        }
    } 
    else if (u1 == 0xC5) {
        if (u2 == 0x81){
             b2 = 0x82;
        }
        else if (u2 == 0x83){
             b2 = 0x84; // Ń -> ń
        }
        else if (u2 == 0x9A){
         b2 = 0x9B; // Ś -> ś
        }
        else if (u2 == 0xB9){
             b2 = 0xBA; // Ź -> ź
        }
        else if (u2 == 0xBB){
             b2 = 0xBC; // Ż -> ż
        }
    } 
    else if (u1 == 0xC3 && u2 == 0x93) {
        b2 = 0xB3; // Ó -> ó
    }
}

void polskiNaDuze(char &b1, char &b2){

    unsigned char u1 = (unsigned char)b1;
    unsigned char u2 = (unsigned char)b2;

    if (u1 == 0xC4) {
        if (u2 == 0x85){
             b2 = 0x84; // Ą -> ą
        }
        else if (u2 == 0x87){
             b2 = 0x86; // Ć -> ć
        }
        else if (u2 == 0x99) {
            b2 = 0x98; // Ę -> ę
        }
    } 
    else if (u1 == 0xC5) {
        if (u2 == 0x82){
             b2 = 0x81;
        }
        else if (u2 == 0x84){
             b2 = 0x83; // Ń -> ń
        }
        else if (u2 == 0x9B){
         b2 = 0x9A; // Ś -> ś
        }
        else if (u2 == 0xBA){
             b2 = 0xB9; // Ź -> ź
        }
        else if (u2 == 0xBC){
             b2 = 0xBB; // Ż -> ż
        }
    } 
    else if (u1 == 0xC3 && u2 == 0xB3) {
        b2 = 0x93; // Ó -> ó
    }
}


void tytulowe(char tekst[]){

    int n=strlen(tekst);

    for (int i=0; i<n; i++){
        

        unsigned char c=(unsigned char)tekst[i];
        if(c<123){

            if(i==0 || tekst[i-1]==' '){
            tekst[i]=toupper(tekst[i]);
            }
            else{
            tekst[i]=tolower(tekst[i]);
            }

        }
        else if (i+1<n){
            if(i==0 || tekst[i-2]==' '){
                polskiNaDuze(tekst[i],tekst[i+1]);
         }
            else{
                polskiNaMaly(tekst[i],tekst[i+1]);
            }
        }
    }
    cout<<tekst;
}
void male( char tekst[]){

    int n = strlen(tekst);
    for (int i = 0; i < n; i++) {
        unsigned char c = (unsigned char)tekst[i];
        if (c < 128) {
            tekst[i] = tolower(c);
        } else if (i + 1 < n) {
            polskiNaMaly(tekst[i], tekst[i + 1]);
            i++; // Przeskakujemy drugi bajt polskiego znaku
        }
    }

    cout<<tekst;
}

void duze(char tekst[]){

    int n=strlen(tekst);

    for(int i=0; i<n;i++){

        unsigned char c=(unsigned char)tekst[i];
        if(c<123){
             tekst[i]=toupper(tekst[i]);
        }
        else if (i+1<n){

            polskiNaDuze(tekst[i],tekst[i+1]);
         }
    }
    cout<<tekst;
}

int main()
{
    const int MAX_SIZE = 1000;
    char tekst[MAX_SIZE];
    int wybor;


    cout<<"Tekst: ";
    cin.getline(tekst, MAX_SIZE);

    cout<<"Konwersja: "<<endl;
    cout<<"1. małe "<<endl;
    cout<<"2. WIELKIE"<<endl;
    cout<<"3. Tytułowe"<<endl;
    cout<<"Wybór: "<<endl;
    cin>>wybor;

   switch (wybor) {
        case 1:
            male(tekst);
            break;
        case 2:
            duze(tekst);
            break;
        case 3:
            tytulowe(tekst);
            break;
        default:
            cout << "Nieprawidłowy wybór!" << endl;
            break;
    }

    return 0;
}

