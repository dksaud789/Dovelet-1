/*
 * boi_squint.c
 *
 *  Created on: Feb 16, 2013
 *      Author: lucas
 */

#include <stdio.h>
#include <math.h>

void main(void)
{
	long long int n;

	scanf("%lld", &n);

	printf("%lld\n", (long long int)ceil(sqrt((double)n)));

	return;
}
