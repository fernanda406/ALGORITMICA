#include <iostream>

 using namespace std;

 int main()
  {
      int contra, x=123;

      do
      {
          cout<< " Usuario: Admin \n\n Password: " <<endl;
          cin>> contra;

          if( contra != x )

          cout<< " Contraseņa Incorrecta " <<endl;

      }
      while( contra != x );

        cout<< "Contraseņa Correcta" <<endl;

   return 0;

  }
