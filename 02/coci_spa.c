/*
 * coci_spa.c
 *
 *  Created on: Feb 18, 2013
 *      Author: lucas
 */

#include <stdio.h>

void main(void)
{
	int h, m;

	scanf("%d%d", &h, &m);
	if (45 <= m)
	{
		m -= 45;
	}
	else
	{
		m = m + 60 - 45;
		h--;
		if (0 > h)
		{
			h = 23;
		}
	}
	printf("%d %d\n", h, m);
	return;
}
