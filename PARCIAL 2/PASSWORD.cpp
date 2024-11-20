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

          cout<< " Contraseña Incorrecta " <<endl;

      }
      while( contra != x );

        cout<< "Contraseña Correcta" <<endl;

   return 0;

  }
