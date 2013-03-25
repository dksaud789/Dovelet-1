/*
 * arith_seq.c
 *
 *  Created on: Mar 25, 2013
 *      Author: lucas
 */
/*
프로그램 명: arith_seq(open)
제한시간: 1 초
등차수열이란 인접한 항과의 차이가 동일한 수열을 말한다.

예를 들어 등차 수열을 이루는 수열을 n 항까지 나열 하면,


이 수열은 초항(첫째 항) a 가 1 이고 인접한 항의 차이 d 가 2 (공차) 인 등차 수열이다.
등차 수열의 몇 가지 예를 보면





문제는 초항 a 와 공차 d 수 an 이 주어질 때 이 수 an 이 몇 번째 항 인가 찾는 것이다.
입력

세 정수 a , d , an 이 주어진다. -1000 < a,d < 1000 , -100000 < an < 100000
단 , d 는 0 이 아니다.

출력

an 이 몇 번째 항 인 가를 출력한다. 만약 이 수열의 수가 아니면 X 를 출력한다.
입출력 예

입력

1 2 9

출력

5

입력

2 2 9

출력

X
입 출력 보충

첫 번째 입출력에 대한 보기이다.
초항(a):
공차(d):
항수(n):
수열:

출처: New Zealand junior Programming Contest 2010
 */

#include <stdio.h>

main()
{
	int a,d,n;
	scanf("%d%d%d",&a,&d,&n);
	if((n-a)%d==0)printf("%d",(n-a)/d+1);
	else puts("X");
}
