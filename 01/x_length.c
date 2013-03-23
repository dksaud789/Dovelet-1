/*
 * x_length.c
 *
 *  Created on: Feb 17, 2013
 *      Author: lucas
 */

#include <stdio.h>
#include <math.h>

void main(void)
{
	int a;
	int b;

	scanf("%d%d", &a, &b);
	printf("%.3f\n", (a + b) * (3.14159 + sqrt(2)));
	return;
}
