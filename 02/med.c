/*
 * med.c
 *
 *  Created on: Mar 6, 2013
 *      Author: lucas
 */
/*
프로그램 명: med
제한시간: 1 초
세 정수를 입력으로 받아 이 수를 크기 순으로 나열할 때 중간에 위치한 수(중위수)를 구하는 문제이다.
입력

1000 이하의 자연수가 입력으로 주어진다. 세 수는 모두 같을 수 도 있다.
출력

입출력 예

입력

1 5 2

출력

2

입력

2 2 2

출력

2

입력

2 5 2

출력

2
 */

#include <stdio.h>
/*
void main(void)
{
	int a, b, c;
	int i, j, k;
	i = j = k = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a<=b) j++;
	else i++;
	if (b<=c) k++;
	else j++;
	if (a<=c) k++;
	else i++;
	printf("%d", (1==i)?a:((1==j)?b:c));
	return;
}
*/
void main(void)
{
	int t,p,z,a;
	scanf("%d%d%d",&t,&p,&z);
	if(t>p){a=t;t=p;p=a;}
	printf("%d",p<z?p:z<t?t:z);
}
