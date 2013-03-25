/*
 * triangular_sum.c
 *
 *  Created on: Mar 25, 2013
 *      Author: lucas
 */
/*
프로그램 명: triangular_sum(open)
제한시간: 1 초
n 번째 삼각수 T(n) 다음과 같다.
T(n) = 1 + 2 ... + n
T(4) 는 아래와 같다.

   X
  X X
 X X X
X X X X
삼각수의 가중치의 합 w(n)이 다음과 같이 정의될 때 이를 구하는 것이 문제이다.

입력

300 이하인 n 이 입력된다.
출력

w(n) 값을 출력한다.
입출력 예

입력

3

출력

45
 */

#include <stdio.h>

main()
{
	long long int n;
	scanf("%lld",&n);
	n=(n*(n+1)*(n+2)*(n+3))/8;
	printf("%lld",n);
}
