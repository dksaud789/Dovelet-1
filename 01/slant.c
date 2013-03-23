/*
 * slant.c
 *
 *  Created on: Feb 16, 2013
 *      Author: lucas
 */

#include <stdio.h>

void main(void)
{
	int x1;
	int y1;
	int x2;
	int y2;
	int n;

	scanf("%d%d", &x1, &y1);
	scanf("%d%d", &x2, &y2);

	n = (y1 - y2) / (x1 - x2);
	printf("%d %d\n", n , y1 - n * x1);

	return;
}
