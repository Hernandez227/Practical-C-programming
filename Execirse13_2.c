#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char *caracter(char *string); /* finds first nonwhite character in a string */

int main()
{
	char string[] = "   Esto es una cadena";

	printf("El primer nonwhite es: '%c'\n", *caracter(string));

	return 0;}


char *caracter(char *string)
{
	/* Loop que pasa atrevez de todas las cadenas */
	while (*string != '\0') {
		/* Checa si es un  nonwhite */
		if (! isspace(*string))
			/* Retorna al puntero al primer caracter */
			return string;
		++string;}

	return string;}
