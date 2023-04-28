#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entery point
 * 
 * Return: 0 on succes
 */
int main(void)
{
	int len, len2;

	len = _printf("Lets's print a simple sentence. \n");
	len2 = printf("Let's print a simple sentence. \n");

	fflush(stdout);
		if (len != len2)
		{
			printf("lengths differ.\n");
			fflush(stdout);
			return (1);
		}
		return (0);
}
