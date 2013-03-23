/*
 * cross.c
 *
 *  Created on: Mar 8, 2013
 *      Author: lucas
 */
/*
프로그램 명: cross(open)
제한시간: 1 초
원을 가로 지르는 선분을 현이라 한다.


원에는 1 부터 100 까지 일정한 간격으로 점이 부여되어 있다.



두 개의 현이 주어질 때 이 현이 교차하는지 아닌지를 판단하는 프로그램을 작성하시오.

아래 그림은 두 현이 교차하는 경우의 예이다.



입력 형식

첫 줄에는 한 현의 정보가 다음 줄에는 다른 한 현의 정보가 입력된다. 숫자는 1 이상 100 이하인 서로 다른 자연수이다.

출력 형식

두 현이 교차하면 cross ,아니면 not cross 를 출력한다.

입출력 예


입력

20 80
85 40

출력

cross
 */

#include <stdio.h>
/*
void main(void)
{
	int a, b, c, d, e;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	e=100;a-=e;
	b=(b-a)%e;
	c=(c-a)%e-b;
	d=(d-a)%e-b;
	puts(c*d<0?"cross":"not cross");
	return;
}
*/
/*
main(a,b,c,d,e)
{
	scanf("%d%d%d%d",&a,&b,&c,&d);
	e=100;a-=e;
	b=(b-a)%e;
	c=(c-a)%e-b;
	d=(d-a)%e-b;
	puts(c*d<0?"cross":"not cross");
}
*/
main(a,b,c,d)
{
	scanf("%d%d%d%d",&a,&b,&c,&d);
	a-=100;
	b=(b-a)%100;
	puts(((c-a)%100-b)*((d-a)%100-b)<0?"cross":"not cross");
}

