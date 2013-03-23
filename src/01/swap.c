/*
 * swap.c
 *
 *  Created on: Feb 16, 2013
 *      Author: lucas
 */

#include <stdio.h>

void main(void)
{
	int a;
	int b;
	int c;

	scanf("%d%d", &a, &b);
	c = a;
	a = b;
	b = c;
	printf("%d %d\n", a, b);

	return;
}
