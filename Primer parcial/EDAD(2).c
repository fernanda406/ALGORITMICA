#include <stdio.h>
#include <conio.h>

 int main()
    {

        int año, mes, dia, edad;
        
        printf("Introduce tu Dia de Nacimiento: ");
        scanf("%d", &dia);
        printf("Introduce tu Mes de Nacimiento: ");
        scanf("%d", &mes);
        printf("Introduce tu Año de Nacimiento: ");
        scanf("%d", &año);

        edad = 2024 - año;

        printf("Edad es: %d ", edad );
        
        getch();
        return 0;
    }