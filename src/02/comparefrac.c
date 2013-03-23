/*
 * comparefrac.c
 *
 *  Created on: Feb 19, 2013
 *      Author: lucas
 */

#include <stdio.h>

void main(void)
{
	int a, b, c, d;

	scanf("%d%d%d%d", &a, &b, &c, &d);
	a *= d;
	b *= c;
	if (a > b)
	{
		printf("1");
	}
	else if (a < b)
	{
		printf("-1");
	}
	else
	{
		printf("0");
	}

	return;
}
