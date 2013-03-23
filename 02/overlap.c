/*
 * overlap.c
 *
 *  Created on: Mar 9, 2013
 *      Author: lucas
 */
/*
프로그램 명: overlap(open)
제한시간: 1 초
두 사각형 좌표가 주어질 때 두 사각형이 오버랩(overlap) 되는지 아닌지를 판단하는 프로그램을 작성하시오. 변을 공유하거나 꼭지점을 공유하는 경우에도 overlap 되는 것으로 간주한다.


입력

한 줄에 4 개 씩 음이 아닌 정수 x1 y1 x2 y2 가 두 줄로 주어진다.
(x1,y1) 은 왼쪽 아래 좌표이고, (x2,y2) 은 오른쪽 위 좌표이다. 입력되는 수는 200 보다 작다.

출력

overlap 되는 경우에는 "Overlap" 아니면 "No overlap" 을 출력한다.
입출력 예

입력

1 1 2 2
2 2 5 3

출력

Overlap
 */

#include <stdio.h>
/*
void main(void)
{
	int a, b, c, d, s, t, u, v;
	scanf("%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &s, &t, &u, &v);
	if (c >= s && u >= a && d >= t && v >= b)
	{
		puts("Overlap");
	}
	else
	{
		puts("No overlap");
	}
	return;
}
*/
/*
main(a,b,c,d,s,t,u,v)
{
	scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&s,&t,&u,&v);
	puts(c<s|u<a|d<t|v<b?"No overlap":"Overlap");
}
*/
int n[9];
main(c)
{
	while(~scanf("%d",n+c++));
	puts(n[7]<n[1]|n[3]<n[5]|n[8]<n[2]|n[4]<n[6]?"No overlap":"Overlap");
}
