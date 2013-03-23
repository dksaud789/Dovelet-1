/*
 * calorie.c
 *
 *  Created on: Feb 19, 2013
 *      Author: lucas
 */

#include <stdio.h>

void main(void)
{
	int a, b, c, d;
	int burger[] = {0, 461, 431, 420, 0};
	int drink[] = {0, 130, 160, 118, 0};
	int side[] = {0, 100, 57, 70, 0};
	int dessert[] = {0, 167, 266, 75, 0};

	scanf("%d%d%d%d", &a, &b, &c, &d);

	printf("Your total Calorie count is %d.", burger[a]+drink[b]+side[c]+dessert[d]);

	return;
}
