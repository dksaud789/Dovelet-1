/*
 * d_f.c
 *
 *  Created on: Feb 16, 2013
 *      Author: lucas
 */

#include <stdio.h>
#include <math.h>

void main(void)
{
	float f;
	int d;

	scanf("%f", &f);
	d = (int)floor(f);
	printf("%d %.2f\n", d, f - d);

	return;
}

