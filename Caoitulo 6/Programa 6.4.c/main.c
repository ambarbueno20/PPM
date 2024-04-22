#include <stdio.h>

/* Simetrico.
El programa, al recibir como dato un arreglo bidimensional cuadrado, determina
si el mismo es simetrico. */

const int MAX = 100;
void Lectura(int [][MAX], int);
int Simetrico(int [][MAX], int);

void main(void)
{
int MAT [MAX][MAX], N, RES;
do
{
    printf("Ingrese el tama�o del arreglo: ");
    scanf("%d", &N);
}
while (N > MAX || N < 1); /* Se verifica que el tama�o del arreglo sea
v�lido. */

Lectura (MAT, N);
RES = Simetrico(MAT, N);
if (RES)
    printf("\nEl arreglo bidimensional es simetrico");
else
    printf("\nEl arreglo bidimensional no es simetrico");
}

void Lectura(int A[][MAX], int T)
/* La funcion Lectura se utiliza para leer un arreglo bidimensional cuadrado de
tipo entero de T filas y T columnas. */
{
int I, J;
for (I=0; I<T; I++)
    for (J=0; J<T; J++)
    {
        printf("Fila: %d\tColumna: %d", I+1, J+1);
        scanf("%d", &A[I][J]);
    }
}

int Simetrico (int A[][MAX], int T)
/* La funcion Simetrico se utiliza para determinar si el arreglo bidimensional
cuadrado es simetrico. Si es sim�trico regresa 1, en caso contrario, 0.
Observa que en el segundo ciclo solamente se recorre la matriz triangular
inferior, sin la diagonal principal. */
{
int I = 0, J, F = 1;
while ((I < T) && F)
{
    if(A[I][J] == A[J][I])
        J++;
    else
    F = 0;
I++;
}
return (F);
}
