/*
 * tiles.c
 *
 *  Created on: Feb 16, 2013
 *      Author: lucas
 */

#include <stdio.h>
#include <math.h>

void main(void)
{
	int w;
	int h;
	int wc;
	int hc;
	int wf;
	int hf;

	scanf("%d%d", &w, &h);

	wc = (int)ceil(w / 8.0);
	hc = (int)ceil(h / 8.0);
	wf = (int)floor(w / 8.0);
	hf = (int)floor(h / 8.0);

	printf("The number of whole tiles is %d part tiles is %d\n", wf * hf, wc * hc - wf * hf);

	return;
}
