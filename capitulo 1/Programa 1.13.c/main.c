#include <stdio.h>

/* aplicacion de operadores. */

void main(void)
{
int i = 5, j = 4, k, l, m;

k = !i * 3 + --j * 2 - 3;
printf("\n El valor de k es: %d", k);

l = ! (!i || 1 && 0) && 1;
printf("\nEl valor de 1 es: %d", 1);

m = (k = (! (12 > 10)), j = (10 || 0) && k, (! (k || j)));
printf("/nEl valor de m es: %d", m);
}
