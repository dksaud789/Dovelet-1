/*
 * rpoly.c
 *
 *  Created on: Feb 16, 2013
 *      Author: lucas
 */

#include <stdio.h>
#include <math.h>

void main(void)
{
	float r;
	int n;

	scanf("%f%d", &r, &n);
	printf("%.3f", 0.5 * n * r * r * sin(2 * M_PI / n));

	return;
}
