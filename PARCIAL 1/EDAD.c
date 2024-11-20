//EDAD
#include <stdio.h>
#include <conio.h>

 int main()
   {
     int año, edad;
     
     printf("Introduce tu año de Nacimiento: ");
     scanf("%d", &año);

     edad = 2024 - año;

     printf("Tu edad es: %i \n", edad);

     return 0;
   }