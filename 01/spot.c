/*
 * spot.c
 *
 *  Created on: Feb 16, 2013
 *      Author: lucas
 */

#include <stdio.h>

void main(void)
{
	float d;
	float p;

	scanf("%f", &d);
	scanf("%f", &p);

	printf("%.3f\n", d * -p * 0.01);

	return;
}
