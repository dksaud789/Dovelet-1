/*
 * rep.c
 *
 *  Created on: Mar 23, 2013
 *      Author: lucas
 */
/*
프로그램 명: rep
제한시간: 1 초
자연수 하나를 입력으로 받아 1 부터 이 수까지 출력하는 프로그램을 작성하시오.
입력

n 이 입력으로 주어진다. n 은 100 이하의 자연수이다.
출력

1 부터 연속적으로 n 까지 출력한다. 수 사이에는 공백으로 구분한다.
입출력 예

입력

3

출력

1 2 3
 */
/*
#include <stdio.h>

void main(void)
{
	int a, b = 0;
	scanf("%d", &a);
	while(b++<a)
	{
		printf("%d ", b);
	}
	return;
}
*/
main(a,b)
{
	scanf("%d",&a);
	while(b++<a)printf("%d ",b);
}
