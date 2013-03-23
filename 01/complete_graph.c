/*
 * complete_graph.c
 *
 *  Created on: Feb 16, 2013
 *      Author: lucas
 */

#include <stdio.h>

void main(void)
{
	int n;

	scanf("%d", &n);

	printf("%d\n", n * (n - 1) / 2);

	return;
}
