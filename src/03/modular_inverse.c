/*
 * modular_inverse.c
 *
 *  Created on: Mar 25, 2013
 *      Author: lucas
 */
/*
프로그램 명: modular_inverse(open)
제한시간: 1 초
암호학에서 모듈러 인버스(modular inverse)를 구하는 것은 핵심적인 부분이다.

x , m 이 주어진다. 0 < x < m

x 의 모듈러 인버스는 다음 성질을 만족하는 유일한 정수 n 이다.( 0 < n < m )

x*n 을 m 으로 나눌 때 나머지가 1 이다.
예를 들어 , 4*13 = 52 = 17 * 3 + 1 에서 52 는 17 로 나눌 때 나머지가 1 이다. 그래서 13,4 는 법(modulo) 17 에 대한 modular inverse 이다.
x 와 m 이 주어질 때 모듈러 인버스 n 을 구하는 것이 문제이다.

입력

자연수 x 와 m 이 주어진다. (m <= 100)
출력

답이 없는 경우 "No such integer exists." 를 출력한다.
입출력 예

입력

4 17

출력

13

입력

6 10

출력

No such integer exists.
출처:uwaterloo junior
 */
#include <stdio.h>

main()
{
	int x,m,n;
	scanf("%d%d",&x,&m);
	n=m;
	while(--n>0)if(x*n%m==1){printf("%d",n);break;}
	if(!n)puts("No such integer exists.");
}
