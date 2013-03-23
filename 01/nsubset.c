/*
 * nsubset.c
 *
 *  Created on: Feb 16, 2013
 *      Author: lucas
 */

#include <stdio.h>
#include <math.h>

void main(void)
{
	int n;
	int m;

	scanf("%d%d", &n, &m);

	printf("%.0f", pow(m, n));

	return;
}
