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

          cout<< " Contrase�a Incorrecta " <<endl;

      }
      while( contra != x );

        cout<< "Contrase�a Correcta" <<endl;

   return 0;

  }
