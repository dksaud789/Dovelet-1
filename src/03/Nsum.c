/*
 * Nsum.c
 *
 *  Created on: Mar 26, 2013
 *      Author: lucas
 */
/*
프로그램 명: Nsum(open)
제한시간: 1 초
N 이 주어질 때, 1+2+…+(N-1)+N 을 더하면 M 을 만들 수 있다. M 이 주어질 때, N 을 구하여라.

입력

첫째 줄에 1~N 의 합 M 이 입력된다. 답을 구할수 없는 경우는 입력으로 주어지지 않는다.
출력

첫째 줄에 N 을 출력한다. N 은 커야 100 을 넘지 않는다.
입출력 예

입력

45

출력

9
출처 : 제 7회 전국 정보과학경시대회 초등부 문제
 */

#include <stdio.h>
/*
#include <math.h>

main()
{
	int m;
	scanf("%d",&m);
	printf("%d",(sqrt(8*m+1)-1)/2);
}
*/
main()
{
	int m,n=0;
	scanf("%d",&m);
	while((m-=++n)>0);
	printf("%d",n);
}
