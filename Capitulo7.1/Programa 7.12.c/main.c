#include <stdio.h>
#include <ctype.h>

/*Cuenta letras minusculas y mayusculas.
El programa, al recibir como dato una frase, determian el n�mero de letras
minusculas y mayusculas que existen en la frase. */

void main(void)
{
char cad[50];
int i = 0, mi = 0, ma = 0;
printf("\nIngrese la cadena de caracteres (maximo 50 caracteres): ");
gets(cad);
while (cad[i] != '\0')
{
    if (islower (cad[i]))
        mi++;
    else
        if (isupper (cad[i]))
            ma++;
    i++;
}
printf("\n\n Numero de letras minusculas: %d", mi);
printf("\n\n Numero de letras mayusculas: %d", ma);
}
