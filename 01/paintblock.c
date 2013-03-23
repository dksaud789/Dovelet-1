/*
 * paintblock.c
 *
 *  Created on: Feb 17, 2013
 *      Author: lucas
 */

#include <stdio.h>

void main(void)
{
	int a;
	int b;
	int c;

	scanf("%d%d%d", &a, &b, &c);

	printf("%d", (a + b + c - 6) * 4);

	return;
}
