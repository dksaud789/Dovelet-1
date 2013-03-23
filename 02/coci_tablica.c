/*
 * coci_tablica.c
 *
 *  Created on: Mar 6, 2013
 *      Author: lucas
 */
/*
프로그램 명: coci_tablica
제한시간: 1 초
페리카는 수학을 잘 한다. 단 그의 하나의 약점은 더하기와 나누기이다. 그를 돕기 위해 선생님은 다음과 같은 문제를 제시했다.

2행 2렬 테이블이 주어지고 4 개의 숫자 A,B,C,D 가 주어진다.



이 테이블의 값은 다음과 같이 약속한다.

a/c + b/d
문제는 시계 방향 90 도 씩 회전하면서 테이블의 값을 구할 때 가장 큰 값을 얻기위한 최소 회전 수를 구하는 것이다.

다음은 90 도 회전 하는 경우의 그림이다.



입력

첫 줄에는 A,B 가
두 번째 줄에는 C,D 가 주어진다.
네 수는 정수이고 100 을 넘지 않는다.
출력

최소 회전 수를 출력한다.
입출력 예

입력

1 2
3 4

출력

2

입력

5 9
7 2

출력

0

입력

41 99
100 13

출력

1
출처:coci 2010
 */

#include <stdio.h>

void main(void)
{
	float a, b, c, d;
	int i;
	float m, s;
	scanf("%f%f%f%f", &a, &b, &c, &d);

	i = 0;
	m = a / c + b / d;

	s = c / d + a / b;
	if (m < s)
	{
		m = s;
		i = 1;
	}
	s = d / b + c / a;
	if (m < s)
	{
		m = s;
		i = 2;
	}
	s = b / a + d / c;
	if (m < s)
	{
		m = s;
		i = 3;
	}
	printf("%d", i);

	return;
}
