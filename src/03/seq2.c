/*
 * seq2.c
 *
 *  Created on: Mar 25, 2013
 *      Author: lucas
 */
/*
프로그램 명: seq2
제한시간: 1 초
수 N 을 입력으로 받어서 출력 예의 형식으로 합을 구하는 프로그램이다.

입력

수 N 이 입력으로 주어진다. N 은 1000 이하의 자연수이다.
출력

출력 예의 형식으로 출력한다.
입출력 예

입력

5

출력

1..1 1
1..2 3
1..3 6
1..4 10
1..5 15
 */
#include <stdio.h>

main()
{
	int a, i ,s;
	i=s=0;
	scanf("%d", &a);
	while (i++<a)
	{
		printf("1..%d %d\n", i, s+=i);
	}
}
