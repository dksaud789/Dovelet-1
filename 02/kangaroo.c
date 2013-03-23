/*
 * kangaroo.c
 *
 *  Created on: Mar 5, 2013
 *      Author: lucas
 */

#include <stdio.h>

void main(void)
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);
	a = b - a - 1;
	c = c - b - 1;
	printf("%d", a > c ? a : c);

	return;
}
