//DOUBLE 2.0
#include <stdio.h>
#include <conio.h>

 int main()
  {

      double num, sum, pro;

      while( num != 0 )
      {

          sum = sum + num;
          pro = pro * num;
          printf(" \nEscribe un numero diferente de 0: ");
          scanf(" %lf ", &num);
          printf(" \n Numero= %lf Suma= %lf Producto= %lf ", num, sum, pro);
          printf(" \n Nuevo numero, (para acabar escribe 0 ");

      }

      printf(" Suma Total= %lf Producto Total= %lf ", sum, pro);

   return 0;

  }
