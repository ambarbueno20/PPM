#include <stdio.h>

/*Proedio curso.
El programa, al recibir como dato el promedio de un alumno en un curso
universitario, escribe aprobado su si promedio es mayor o igual a 6.

PRO: Variable de tipo real. */

void main(void)
{
float PRO;
printf("ingrese el promedio del lumno: ");
scanf("%f", &PRO);
if (PRO >= 6)
    printf("/nAprobado");
}
