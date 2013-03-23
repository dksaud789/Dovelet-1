/*
 * star.c
 *
 *  Created on: Mar 18, 2013
 *      Author: lucas
 */
/*
프로그램 명: star
제한시간: 1 초
자연수를 입력으로 받아 해당 자연수 만큼의 별을 출력한다.
입력

100 이하의 자연수이다.
출력

별 사이에는 공백이 없다.
입출력 예

입력

5

출력

*****
 */
/*
#include <stdio.h>

void main(void)
{
	int a;
	scanf("%d", &a);
	while(a-->0) printf("*");

	return;
}
*/
main(a)
{
	scanf("%d", &a);
	while(a--) printf("*");
}
