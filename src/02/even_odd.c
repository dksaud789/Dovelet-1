/*
 * even_odd.c
 *
 *  Created on: Feb 18, 2013
 *      Author: lucas
 */

#include <stdio.h>

void main(void)
{
	int a, b;
	char* oe[2] = {"even", "odd"};
	scanf("%d%d", &a, &b);
	a %= 2;
	b %= 2;
	printf("%s+%s=%s\n", oe[a], oe[b], oe[(a+b)%2]);
	printf("%s*%s=%s\n", oe[a], oe[b], oe[a*b]);

	return;
}
