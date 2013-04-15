/*
 * insubunE.c
 *
 *  Created on: Apr 15, 2013
 *      Author: lucas
 */
/*
프로그램 명: insubunE(open)
제한시간: 1 초
인수분해를 하세요.



꼴의 인수분해이다.

입력

a ( 0 < a < 1500 )와 b ( b < 300000 ) 인 자연수가 주어진다.
불가능한 데이터가 주어질수도 있다.

출력

예시를 참고하시오
(x-p)(x-q)일때 p <= q이어야 한다.

입출력 예

입력

4 3

출력

(x-1)(x-3)

입력

5 2

출력

impossible
출처+채점데이터:mathlove44
 */

#include <stdio.h>

main()
{
	int a,b,q,p=0;
	scanf("%d%d",&a,&b);
	while(++p<a)
	if(0==b%p)
	{
		q=b/p;
		if(0==p+q-a)
		{
			printf("(x-%d)(x-%d)",p,q);
			return;
		}
	}
	puts("impossible");
}
