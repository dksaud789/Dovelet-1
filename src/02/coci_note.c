/*
 * coci_note.c
 *
 *  Created on: Feb 22, 2013
 *      Author: lucas
 */

#include <stdio.h>

void main(void)
{
	int n[8];
	int cmp;
	int i;

	scanf("%d%d%d%d%d%d%d%d", &n[0], &n[1], &n[2], &n[3], &n[4], &n[5], &n[6], &n[7]);

	if (n[0] < n[1])
	{
		for (i = 1; i < 7; i++)
		{
			if (n[i] > n[i + 1])
			{
				printf("mixed");
				return;
			}
		}
		printf("ascending");
	}
	else
	{
		for (i = 1; i < 7; i++)
		{
			if (n[i] < n[i + 1])
			{
				printf("mixed");
				return;
			}
		}
		printf("descending");
	}

	return;
}
