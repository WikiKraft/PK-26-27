#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    char znak;

    cout<<"Podaj znak: ";
    cin>>znak;

    cout<<"Znak: '"<<znak<<"'"<<endl;
    
    int dzie= static_cast<int>(znak);

    

    if(dzie>=65 && dzie<=90){
        cout<<"Rodzaj: duża litera"<<endl;
    }
    else if(dzie>=48 && dzie<=57){

        cout<<"Rodzaj: cyfra"<<endl;

    }
    else if(dzie>=97 && dzie<=122){

        cout<<"Rodzaj: mała litera"<<endl;
    }
    else {
        cout<<"Rodzaj: inny znak"<<endl;
    }
    
    cout<<"Kod dziesiętnie: "<<dzie<<endl;
    cout<<"Kod szesnastkowe: "<<showbase<<hex<<dzie<<endl;

    return 0;


}