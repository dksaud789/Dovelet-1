/*
 * tri.c
 *
 *  Created on: Mar 7, 2013
 *      Author: lucas
 */
/*
프로그램 명: tri
제한시간: 1 초
세 정수를 입력 받아 이 수가 삼각형을 만들 수 있는지를 판단하는 프로그램을 작성하는 것이 문제이다.

입력

세 양의 정수가 입력으로 주어진다. 세 수 모두 100000 이하이다.
출력

가능하면 yes , 아니면 no 를 출력한다.
입출력 예

입력

2 3 5

출력

no

입력

4 5 6

출력

yes
참고

삼각형이 이루어 지기 위해서는 제일 큰 변의 길이가 나머지 두 변의 길이의 합 보다 작아야 한다.


출처:dovelet
 */

#include <stdio.h>
/*
void main(void)
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%s",(a+b+c)>2*(a>b&a>c?a:b>c?b:c)?"yes":"no");
	return;
}
*/

main(a,b,c)
{
scanf("%d%d%d",&a,&b,&c);
printf("%s",(a+b+c)>2*(a>b&a>c?a:b>c?b:c)?"yes":"no");
}

/*
main(a,b,c)
{
scanf("%d%d%d",&a,&b,&c);
if(a>b&a>c)
	if(b+c>a)printf("yes");
	else printf("no");
else if(b>c)
	if(c+a>b)printf("yes");
	else printf("no");
else
	if(a+b>c)printf("yes");
	else printf("no");
}
*/
