/*
 * op.c
 *
 *  Created on: Feb 16, 2013
 *      Author: lucas
 */

#include <stdio.h>

void main(void)
{
	int a;
	int b;

	scanf("%d%d", &a, &b);
	printf("%d+%d=%d\n", a, b, a + b);
	printf("%d-%d=%d\n", a, b, a - b);
	printf("%d*%d=%d\n", a, b, a * b);
	printf("%d/%d=%d\n", a, b, a / b);
	printf("%d%%%d=%d\n", a, b, a % b);

	return;
}
