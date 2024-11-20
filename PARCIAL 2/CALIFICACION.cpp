#include < stdio.h >
#include < conio.h >

 int main()
  {
      float cal;

      printf(" Ingrese Calificacion: ");
      scanf(" %f ", &cal );

      if (cal > 7)
      {
          printf(" Aprobado ");
      }

      else
      {
          printf(" Reprobado ");
      }

      getch();
  }

