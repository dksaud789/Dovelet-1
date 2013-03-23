/*
 * tpz.c
 *
 *  Created on: Mar 6, 2013
 *      Author: lucas
 */
/*
프로그램 명: tpz(open)
제한시간: 1 초
10 명의 사람에게 스타크래프트 종족 선호를 조사 했더니

테란 : 8
프로토스 : 7
저그 : 9
모든 종족을 좋아하는 가능한 최대 인원과 최소 인원을 구하는 것이 문제이다.
최대 인원은 7 , 아래 테이블은 가능한 한 경우의 예이다.(1,2,3,4,5,6,7)

1	2	3	4	5	6	7	8	9	10
테란	 v	v	v	v	v	v	v	v
프로토스	 v	v	v	v	v	v	v
저그	 v	v	v	v	v	v	v	v	v
최소 인원은 4 명 이고 가능한 한 경우(4,5,6,7) 의 예이다.

1	2	3	4	5	6	7	8	9	10
테란	 v	v	v	v	v	v	v	v
프로토스				v	v	v	v	v	v	v
저그	 v	v	v	v	v	v	v		v	v
입력

첫 줄에는인원 수 N (100 이하) 이 주어지고 다음 줄에는 세 개의 정수가 주어진다. 각 수는 N 을 넘지 않는다.
출력

한 줄에 최대 , 최소 인원수를 출력한다.
입출력 예

입력

10
8 7 9

출력

7 4
 */

#include <stdio.h>
/*
void main(void)
{
	int n,t,p,z,a;
	scanf("%d%d%d%d",&n,&t,&p,&z);
	a=t<p?t:p;
	a=a<z?a:z;
	t+=p-n+z-n;
	printf("%d %d",a,0>t?0:t);
	return;
}
*/
void main(n,t,p,z)
{
	scanf("%d%d%d%d",&n,&t,&p,&z);
	n+=n-t-p-z;
	printf("%d %d",t<p&t<z?t:p<z?p:z,0<n?0:-n);
	return;
}
