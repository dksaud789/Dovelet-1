/*
 * fill.c
 *
 *  Created on: Mar 7, 2013
 *      Author: lucas
 */
/*
프로그램 명: fill
제한시간: 1 초
[문제요약] 그림과 같은 포지션 별 정보가 주어지고 , 각 선수들의 속도 , 체중 , 힘 이 주어질 때 이 선수에게 맞는 포지션이 무엇인지를 출력하는 프로그램이다.

속도는 이하이면 통과 , 체중과 힘은 이상이면 통과



입력

세 수가 주어진다. 첫 수는 속도 , 무게 , 힘 이 주어진다. 세 수는 실수이다.
출력

가능한 포지션을 모두 출력하고 맞는 포지션이 하나도 없으면 No positions 을 출력한다.
여러 포지션이 가능한 경우 위 표에 주어진 순서대로 출력한다.

입출력 예

입력

4.4 180 200

출력

Wide Receiver

입력

5.5 350 700

출력

Lineman

입력

4.4 205 350

출력

Wide Receiver Quarterback

입력

5.2 210 500

출력

No positions
출처: Mid-Atlantic 2004
 */

#include <stdio.h>
/*
void main(void)
{
	float s;
	int w, p, i=0;
	scanf("%f%d%d", &s, &w, &p);
	if (s <= 4.5 && w >= 150 && p >= 200) {i++;printf("Wide Receiver ");}
	if (s <= 6.0 && w >= 300 && p >= 500) {i++;printf("Lineman ");}
	if (s <= 5.0 && w >= 200 && p >= 300) {i++;printf("Quarterback ");}
	if (i==0) puts("No positions ");

	return;
}
*/
main(w,p,i)
{
	float s;
	scanf("%f%d%d",&s,&w,&p);
	i=0;
	if(s<=4.5&&w>=150&&p>=200){i++;printf("Wide Receiver ");}
	if(s<=6.0&&w>=300&&p>=500){i++;printf("Lineman ");}
	if(s<=5.0&&w>=200&&p>=300){i++;puts("Quarterback ");}
	if(i==0)puts("No positions ");
}

