/*
 * average.c
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
	int d;

	scanf("%d%d%d%d", &a, &b, &c, &d);
	printf("%.2f\n", (a + b + c + d) / 4.0);

	return;
}
