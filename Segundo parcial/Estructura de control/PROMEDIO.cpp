#include <stdio.h>
#include <conio.h>

 int main()
 {
     float cal1, cal2, cal3, prom;

     printf(" Ingrese Calificacion 1: ");
     scanf(" %f ", & cal1 );

     printf(" Ingrese Calificacion 2: ");
     scanf(" %f ", & cal2 );

     printf(" Ingrese Calificacion 3: ");
     scanf(" %f ", & cal3 );

     prom = (cal1 + cal2 + cal3) / 3;

     if(prom >= 7)
     {
         printf(" APROBADO ");
     }

     else
     {
         printf(" REPROBADO ");
     }

     getch();
 }
