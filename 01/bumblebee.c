/*
 * bumblebee.c
 *
 *  Created on: Feb 17, 2013
 *      Author: lucas
 */

#include <stdio.h>

void main(void)
{
	int a;
	int b;
	int x;
	int i;

	scanf("%d%d%d%d", &a, &b, &x, &i);

	printf("%.6f", x*i/(double)(a+b));
	return;
}
