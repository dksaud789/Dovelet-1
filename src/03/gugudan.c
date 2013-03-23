/*
 * gugudan.c
 *
 *  Created on: Mar 23, 2013
 *      Author: lucas
 */
/*
프로그램 명: gugudan
제한시간: 1 초
수 하나를 입력으로 받아 해당 구구단을 출력하는 프로그램을 작성하시오.
입력

2 에서 9 사이의 자연수가 입력으로 주어진다.
출력

숫자와 문자사이에 공백은 없다.
입출력 예

입력

3

출력

3*1=3
3*2=6
3*3=9
3*4=12
3*5=15
3*6=18
3*7=21
3*8=24
3*9=27
 */

#include <stdio.h>

void main(void)
{
	int a,i;
	scanf("%d", &a);
	for(i=1;i<=9;i++)
		printf("%d*%d=%d\n",a,i,a*i);
	return;
}
