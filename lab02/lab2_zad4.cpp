#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int wybor;
    float tempC, tempF;

  cout << "Wybierz sposob konwersji: " << endl;

  cout << "1 Celsjusza na Fahrenheita" << endl;

  cout << "2 Fahrenheita na Celsjusza" << endl;

  cin >> wybor;

  if (wybor == 1) {

    cout << "Wybor: 1" << endl;
    cout << "Podaj temperaturę: " << endl;
    cin >> tempC;

    tempF = (tempC * 9/5 + 32);

    cout << fixed << setprecision(2) << tempC << " st. Celsjusza to " << tempF << " st. Farenheita";

  }
  else if (wybor == 2) {

    cout << "Wybor: 2" << endl;
    cout << "Podaj temperaturę: " << endl;
    cin >> tempF;

    if ( tempF < -459.67f ) {

      cout << "Zbyt zimno na liczenie!" << endl;

      
    }
    else {

      tempC = ( (tempF - 32) * 5/9);
      cout << fixed << setprecision (2) << tempF << " st. Farenheita to " << tempC << " st. Celsjusza" << endl;

  
    }

    

  }
  else {

    cout << "Niepoprawny wybor" << endl;

    
  }

  return 0;

}