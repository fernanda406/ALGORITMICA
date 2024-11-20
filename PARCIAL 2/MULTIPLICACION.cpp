#include <iostream>

 using namespace std;

 int main()
  {

      int num;

      cout<<" Dame un Numero: " <<endl;
      cin>> num;

      for( int num2 = 1; num2 <= 10; num2++ )
      {

          cout<< num2 <<" * " << num <<" = " << num2 * num << endl;

      }

   return 0;
  }
