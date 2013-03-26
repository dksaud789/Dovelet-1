/*
 * max.c
 *
 *  Created on: Mar 26, 2013
 *      Author: lucas
 */
/*
프로그램 명: max
제한시간: 1 초
7 개의 수를 입력으로 받아 입력 받은 수 중 최대값을 출력하는 프로그램을 작성하시오.
입력

7 개의 수는 100 이하의 자연수이다.
출력

입출력 예

입력

6 2 9 8 3 4 7

출력

9
 */

#include <stdio.h>

main()
{
	int n,i,m;i=m=0;
	while(scanf("%d",&n)&&i++<7)m=m>n?m:n;
	printf("%d",m);
}
