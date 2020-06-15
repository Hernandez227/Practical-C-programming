#include <stdio.h>

#define MAX_NUMBERS 5

int main()
{
	int numeros[MAX_NUMBERS] = {2, 4, 5, 6, 8};
	int *puntero_num; /* Esto hace que los punteros sean el numero */

	for (puntero_num = &numeros[0]; puntero_num < &numeros[MAX_NUMBERS]; ++puntero_num) {
		*puntero_num = 0;
	}

	int contador;

	for (contador = 0; contador < MAX_NUMBERS ; ++contador) {
		printf("Los numeros son[%d] = %d\n", contador, numeros[contador]);
	}

	return 0;
}
