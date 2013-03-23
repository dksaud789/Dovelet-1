/*
 * beat.c
 *
 *  Created on: Mar 7, 2013
 *      Author: lucas
 */
/*
프로그램 명: beat
제한시간: 1 초
수퍼볼 선데이날이다. 전반전이 끝난 후 막간을 이용해서 지역 해커는 게임의 스코어를 맞추는 게임을 제안했다.

즉 두 팀의 점수의 합 과 차가 주어질 때 , 두 팀의 점수를 알아내는 것이다.

입력

두 개의 수 s , d 가 입력으로 주어진다. s 는 합이고 , d 는 차( 큰수 - 작은수)이다.
출력

각 테스트 데이터당 두 팀의 점수를 큰 수 , 작은 수 순으로 출력한다. 가능하지 않는 경우에는 impossible 을 출력한다. 점수는 음수가 될 수 없다.
입출력 예

입력

40 20

출력

30 10

입력

20 40

출력

impossible
출처:Waterloo local 2005.02.05
 */

#include <stdio.h>
/*
void main(void)
{
	int s,d;
	scanf("%d%d", &s, &d);
	if(s<d||(s+d)&1)puts("impossible");
	else printf("%d %d", (s+d)/2, (s-d)/2);
	return;
}
*/
main(s,d)
{
	scanf("%d%d",&s,&d);
	if(s<d||((s+d)&1))puts("impossible");
	else printf("%d %d",(s+d)/2,(s-d)/2);
}
