/*
 * hack.c
 *
 *  Created on: Mar 7, 2013
 *      Author: lucas
 */
/*
프로그램 명:hack

당신은 해킹회사의 사장이다. 이 회사는 친구들을 골리는데 사용하는 악의적인 소프트웨어를 개발하여 이제 출시를 눈 앞에 두고 있다.
가능한 더 많은 제품을 팔기위해 홍보를 고려하고 있다.

홍보를 할 경우의 수입과 하지 않을 경우의 수입을 알때

홍보를 하는 것이 유리한가 아니면
하지 않는 것이 유리한가 아니면
하던 안 하던 수입은 관계가 없는가를 알고자 한다.
입력

입력은 세 개의 정수 r , e ,c 가 주어진다.

r 은 홍보를 하지 않을 경우의 수입
e 는 홍보를 할 경우의 수입
c 는 홍보 비용
출력

세 가지 중 하나를 출력한다.

"advertise" : 홍보를 할 경우 유리한 경우
"do not advertise" : 차라리 홍보를 하지 않을 경우 유리한 경우
"does not matter" : 하던 , 안하던 수입이 같은 경우
입출력 예

입력

0 100 70

출력

advertise

입력

100 130 30

출력

does not matter

출처: Nordic 2006
 */

#include <stdio.h>
/*
void main(void)
{
	int r, e, c;
	scanf("%d%d%d", &r, &e, &c);
	e-=c;
	puts(r<e?"advertise":r>e?"do not advertise":"does not matter");
	return;
}
*/
main(r,e,c)
{
	scanf("%d%d%d",&r,&e,&c);
	e-=c;
	puts(r<e?"advertise":r>e?"do not advertise":"does not matter");
}


