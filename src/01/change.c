/*
 * change.c
 *
 *  Created on: Feb 16, 2013
 *      Author: lucas
 */

#include <stdio.h>

void main(void)
{
	int a;
	int c100;
	int c50;
	int c10;

	scanf("%d", &a);
	a = 1000 - a;
	c100 = a / 100;
	a %= 100;
	c50 = a / 50;
	a %= 50;
	c10 = a / 10;
	printf("%d %d %d\n", c100, c50, c10);

	return;
}
