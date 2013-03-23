/*
 * vauvau.c
 *
 *  Created on: Mar 11, 2013
 *      Author: lucas
 */
/*
프로그램 명: vauvau
제한시간: 1 초
어떤 마을에 집배원,우유 배달, 환경 미화원 아저씨가 한 집에서 키우는 개 때문에 매일 아침 곤욕을 치르고 있다.

이 집을 지키는 개들은 두 마리이다.

두 마리 모두 일정한 주기를 가지고 공격적이었다가 순한 양으로 변하는 것을 반복한다.

첫 번째 개는 A 분 동안 난폭하고 B 분 동안은 순한 양으로 변한다. 두번 째 개는 C 분 동안 난폭하고 D 분 동안은 순한 양으로 변한다.

세 아저씨들이 이 집에 도착하는 분이 주어질 때 각 아저씨들이 두마리 모두에게 공격 받으면 both, 한 마리에게만 공격 받으면 one , 공격 받지 않으면 none 을 출력하는 게 문제이다.

입력

첫 줄은 A,B,C,D 가 주어진다.
다음 줄은 P,M,G 가 주어진다. 순서대로 집배원(postman),우유 배달(milkman) , 환경 미화원(garbage) 아저씨가 그 집에 도착하는 시각이다.
모든 수는 1 이상 999 이하의 정수이다.
출력

both,one,none 중 하나를 출력한다.
입출력 예

입력

2 2 3 3
1 3 4

출력

both
one
none

입력

2 3 4 5
4 9 5

출력

one
none
none
보충

2분 난폭 3분 온순한 경우, 0,2,5 시각에 딱 맞춰 왔을 때 공격을 받는지 아닌지가 애매하네요. 채점결과로 확인하니 끝나는 쪽 경계를 포함하는군요. (2분에 도착하면 공격을 받고, 0분과 5분에 도착하면 공격받지 않음
출처: Croatian Open Competition in Informatics, contest4 1
 */
#include <stdio.h>
/*
void main(void)
{
	int a, b, c, d, p, m, g, t;
	scanf("%d%d%d%d%d%d%d", &a, &b, &c, &d, &p, &m, &g);
	p--;m--;g--;
	t=(p%(a+b)<a?1:0)+(p%(c+d)<c?1:0);
	puts(t==2?"both":t==1?"one":"none");
	t=(m%(a+b)<a?1:0)+(m%(c+d)<c?1:0);
	puts(t==2?"both":t==1?"one":"none");
	t=(g%(a+b)<a?1:0)+(g%(c+d)<c?1:0);
	puts(t==2?"both":t==1?"one":"none");
	return;
}
*/
main(a,b,c,d,m,s,t)
{
	scanf("%d%d%d%d", &a, &b, &c, &d);
	for(s=0;s++<3&&scanf("%d",&m);)
		puts(2==(t=(--m%(a+b)<a?1:0)+(m%(c+d)<c?1:0))?"both":t==1?"one":"none");
}
