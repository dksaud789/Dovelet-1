/*
 * example_switch.c
 *
 *  Created on: Mar 11, 2013
 *      Author: lucas
 */
/*
프로그램 명: example_switch
제한시간: 1 초
년도 , 달을 입력으로 받아 이 달의 날 수를 구하는 프로그램을 작성하시오.

이 년도가 윤년이면 2 월은 29 이고 , 아니면 28 일.

입력

두 정수 y , m 이 입력으로 주어진다. y 는 1000 이상 , m 은 1 에서 12 사이의 정수이다.
출력

해당 달의 날 수를 출력한다.
입출력 예

입력

2009 10

출력

31
출처:java tutorial
 */

#include <stdio.h>
/*
void main(void)
{
	int y, m;
	scanf("%d%d", &y, &m);
	switch(m)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: puts("31"); break;
	case 4:
	case 6:
	case 9:
	case 11: puts("30"); break;
	default:
		puts( ((0 == y % 4 && 0 != y % 100) || 0 == y % 400) ? "29":"28");
	}
	return;
}
*/
main(y,m)
{
	scanf("%d%d", &y, &m);
	switch(m)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: puts("31"); break;
	case 4:
	case 6:
	case 9:
	case 11: puts("30"); break;
	default:
		puts(((0==y%4&&0!=y%100)||0==y%400)?"29":"28");
	}
}
