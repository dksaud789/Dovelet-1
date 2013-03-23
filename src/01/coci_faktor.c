/*
 * coci_faktor.c
 *
 *  Created on: Feb 16, 2013
 *      Author: lucas
 */

#include <stdio.h>

void main(void)
{
	int x;
	int y;
	int z;

	// z = x / y;

	//x = z * y;

	scanf("%d%d", &y, &z);
	printf("%d\n", y * (z - 1) + 1);

	return;
}
