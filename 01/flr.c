/*
 * flr.c
 *
 *  Created on: Feb 17, 2013
 *      Author: lucas
 */

#include <stdio.h>
#include <math.h>

void main(void)
{
	int a;

	scanf("%d", &a);

	printf("%d", (int)floor(1 + log(a) / log(2)));
	return;
}
