/*
 * swimming.c
 *
 *  Created on: Feb 22, 2013
 *      Author: lucas
 */

#include <stdio.h>

void main(void)
{
	int day;

	scanf("%d", &day);

	if (1 == day || 3 == day || 5 == day)
	{
		printf("enjoy");
	}
	else
	{
		printf("oops");
	}

	return;
}
