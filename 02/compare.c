/*
 * compare.c
 *
 *  Created on: Feb 19, 2013
 *      Author: lucas
 */

#include <stdio.h>

void main(void)
{
	int a, b;
	scanf("%d%d", &a, &b);
	if (a > b)
	{
		printf(">");
	}
	else if (a < b)
	{
		printf("<");
	}
	else
	{
		printf("=");
	}

	return;
}
