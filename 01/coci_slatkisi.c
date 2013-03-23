/*
 * coci_slatkisi.c
 *
 *  Created on: Feb 16, 2013
 *      Author: lucas
 */

#include <stdio.h>

void main(void)
{
	int c;
	int k;
	int n;

	scanf("%d%d", &c, &k);
	n = 1;
	while (k > 0)
	{
		n *= 10;
		k--;
	}

	printf("%d\n", (c + n / 2) / n * n);

	return;
}
