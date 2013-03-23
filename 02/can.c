/*
 * can.c
 *
 *  Created on: Feb 19, 2013
 *      Author: lucas
 */

#include <stdio.h>

void main(void)
{
	int b, w;

	scanf("%d%d", &b, &w);

	printf("%s", (1 == w % 2) ? "white" : "black");

	return;
}
