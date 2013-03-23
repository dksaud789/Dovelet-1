/*
 * sec.c
 *
 *  Created on: Feb 16, 2013
 *      Author: lucas
 */

#include <stdio.h>

void main(void)
{
	int a;
	int d;
	int h;
	int m;
	int s;

	scanf("%d", &a);
	d = a / 86400;
	a %= 86400;
	h = a / 3600;
	a %= 3600;
	m = a / 60;
	s = a % 60;

	printf("%d %d %d %d\n", d, h, m, s);

	return;
}
