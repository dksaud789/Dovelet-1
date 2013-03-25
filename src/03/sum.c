/*
 * sum.c
 *
 *  Created on: Mar 25, 2013
 *      Author: lucas
 */
/*
프로그램 명: sum
제한시간: 1 초
7 개의 자연수를 입력으로 받아 이 수들의 합을 구하는 프로그램을 작성하시오.
입력

7 개의 수가 입력으로 주어진다.
각 수는 100 이하의 자연수이다.

출력

입출력 예

입력

6 2 9 8 3 4 7

출력

39
 */

#include <stdio.h>
main()
{
	int a,i,s;
	i=s=0;
	while(~scanf("%d",&a)&&i++<7)s+=a;
	printf("%d",s);
}
