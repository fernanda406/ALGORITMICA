//GRADOS
#include <iostream>

 using namespace std;

 int main()
  {
    
    float celsius, fahrenheit;

    cout<< "Grados Celsius: " ;
    cin>> celsius ;

    fahrenheit = ( celsius * 9 / 5 ) +32 ;

    cout<< celsius << "ºC son " << fahrenheit << "ºF" <<endl;

    return 0;
    
  }