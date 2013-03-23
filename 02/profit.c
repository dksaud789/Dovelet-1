/*
 * profit.c
 *
 *  Created on: Mar 7, 2013
 *      Author: lucas
 */
/*
프로그램 명: profit
제한시간: 1 초
물건의 원가가 a 이고 , 원가에 b % 이윤을 붙여서 정가를 정했으나 물건이 잘 팔리지 않아 정가의 c% 를 할인해서 팔았다. 이 물건을 팔았을때의 이윤을 구하여라.

입력

a,b,c 가 입력으로 주어진다. (모두 자연수이고 a < 100000 , b,c < 100)
출력

이윤을 소수 첫째 자리에서 반올림하여 출력한다. 손해를 볼 경우에는 loss 를 출력한다.
입출력 예

입력

100 10 10

출력

loss

입력

100 10 8

출력

1
 */

#include <stdio.h>
/*
void main(void)
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	a=(a*((b-c)*100-b*c)+5000)/10000;
	if(a<0)puts("loss");
	else printf("%d",a);
	return;
}
*/
main(a,b,c)
{
	scanf("%d%d%d",&a,&b,&c);
	a=(a*((b-c)*100-b*c)+5000)*.0001;
	if(a<0)puts("loss");
	else printf("%d",a);
}
