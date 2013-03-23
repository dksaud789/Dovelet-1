/*
 * equation.c
 *
 *  Created on: Feb 19, 2013
 *      Author: lucas
 */

#include <stdio.h>

void main(void)
{
	int a, b, c, d;

	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (a == c)
	{
		if (b == d)
		{
			printf("many");
		}
		else
		{
			printf("none");
		}
	}
	else
	{
		printf("%.3f", (double)(d-b)/(double)(a-c));
	}

	return;
}
