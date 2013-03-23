/*
 * seq.c
 *
 *  Created on: Mar 23, 2013
 *      Author: lucas
 */
/*
프로그램 명: seq(open)
제한시간: 1 초
두 자연수가 주어진다. 두 수 사이의 수(두 수 포함)를 차례대로 출력하는 프로그램을 작성하시오.

입력

두 수가 입력으로 주어진다. 두 수는 100 이하의 자연수이다.
출력

두 수 사이에 공백을 하나 준다.
입출력 예

입력

3 6

출력

3 4 5 6

입력

6 3

출력

3 4 5 6
 */
/*
#include <stdio.h>

void main(void)
{
	int a, b, t;
	scanf("%d%d", &a, &b);
	if(a>b)
	{
		t = a;
		a = b;
		b = t;
	}
	a--;
	while (++a<=b)
	{
		printf("%d ", a);
	}

	return;
}
*/
main(a,b,t)
{
	scanf("%d%d",&a,&b);
	if(a>b){t=a;a=b;b=t;}
	a--;
	while(++a<=b)
		printf("%d ",a);
}
