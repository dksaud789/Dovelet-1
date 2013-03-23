/*
 * truck.c
 *
 *  Created on: Mar 7, 2013
 *      Author: lucas
 */
/*
프로그램 명: truck
제한시간: 1 초
제 1 지하차도 를 지나면 2 지하차도 를 지나면 3 지하차도로 이어져있다.


차의 높이가 168 인 경우 세 지하차도의 높이가 주어질 때 지하차도에 충돌하지 않고 건널수 있는지 ( NO CRASH ) 아니면 지하차도에 부딪히는지 ( CRASH X )를 알아내는 프로그램을 작성하는 것이 문제이다.

입력

지하차도의 높이가 입력으로 주어진다. 각 지하차도의 높이는 0 에서 300 이다.

출력

세 개의 지하차도를 무사히 빠져 나가면 "NO CRASH" 를 출력하고 아니면 "CRASH X" 를 출력한다.

즉 지하차도의 높이는 168 이하이면 부딪히고 , X 는 최초로 부딪히는 지하차도의 높이이다.

입출력 예

입력

180 160 170

출력

CRASH 160
출처:South Central USA 2003
 */

#include <stdio.h>
/*
void main(void)
{
	int a, b, c, p, d = 168;
	scanf("%d%d%d", &a, &b, &c);
	if ((p=a)<=d||(p=b)<=d||(p=c)<=d)
	{
		printf("CRASH %d", p);
	}
	else
	{
		puts("NO CRASH");
	}
	return;
}
*/
main(a,b,c,p,d)
{
	d=168;
	scanf("%d%d%d",&a,&b,&c);
	if((p=a)<=d||(p=b)<=d||(p=c)<=d)printf("CRASH %d",p);
	else puts("NO CRASH");
}
