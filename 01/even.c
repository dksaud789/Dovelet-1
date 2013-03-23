/*
 * even.c
 *
 *  Created on: Feb 16, 2013
 *      Author: lucas
 */

#include <stdio.h>
#include <math.h>

void main(void)
{
	int a;
	int b;

	scanf("%d%d", &a, &b);
	printf("%d\n", b - a - (int)floor(sqrt(b)) + (int)ceil(sqrt(a)));
	return;
}
