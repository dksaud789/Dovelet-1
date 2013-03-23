/*
 * fuse.c
 *
 *  Created on: Feb 16, 2013
 *      Author: lucas
 */

#include <stdio.h>

void main(void)
{
	int c;
	int p;
	int r;

	scanf("%d%d%d", &c, &p, &r);

	printf("%d amperes\n", (c * 5 + p * 4 + r + 9) / 10 * 10);

	return;
}
