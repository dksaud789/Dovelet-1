/*
 * fourth.c
 *
 *  Created on: Mar 6, 2013
 *      Author: lucas
 */
/*
 프로그램 명: fourth
제한시간: 1 초
주희는 축에 평행 한 직사각형을 만들기 위해 3 점을 선택 후 네 번째 점을 구하는데 고생을 하고 있다.
주희를 도와 네 번째 점을 구하라.

입력

1 에서 1000 이하의 정수 3 쌍이 입력으로 주어진다.
출력

네 번째 점을 구하라.
입출력 예

입력

5 5
5 7
7 5

출력

7 7

입력

30 20
10 10
10 20

출력

30 10
출처:coci 2007-2008 contest1 1 번
 */

#include <stdio.h>

void main(void)
{
	int x1, x2, x3, y1, y2, y3;
	scanf("%d%d\n%d%d\n%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
	printf("%d %d",
		(x1 == x2) ? x3 : (x1 == x3) ? x2 : x1,
		(y1 == y2) ? y3 : (y1 == y3) ? y2 : y1);

	return;
}
