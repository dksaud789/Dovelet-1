/*
 * rao.c
 *
 *  Created on: Mar 7, 2013
 *      Author: lucas
 */
/*
프로그램 명: rao(open)
제한시간: 1 초
삼각형의 세 변의 길이가 주어질 때 이 삼각형이 직각(right) 삼각형인지 , 예각(acute) 삼각형 인지 , 둔각(obtuse) 삼각형인지를 판별 하라.

입력

세 변의 길이 a,b,c 가 주어진다.(a,b,c 는 10000 이하의 자연수)
이루어질 수 없는 삼각형은 주어지지 않는다.

출력

right,acute,obtuse 중 하나를 출력한다.
입출력 예

입력

5 3 4

출력

right
hint

끼인 각이 직각이면 a^2 + b^2 = c^2
끼인 각이 예각이면 a^2 + b^2 > c^2
끼인 각이 둔각이면 a^2 + b^2 < c^2

 */

#include <stdio.h>
/*
void main(void)
{
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	a*=a;
	b*=b;
	c*=c;
	c=c>a?c:(t=a,a=c,t);
	c=c>b?c:(t=b,b=c,t);
	a+=b;
	if(a>c)printf("acute");
	else if(a<c)printf("obtuse");
	else printf("right");

	return;
}
*/
/*
main(a,c,b,t)
{
	scanf("%d%d%d",&a,&b,&c);
	c=c>a?c:(t=a,a=c,t);
	c=c>b?c:(t=b,b=c,t);
	t=a*a+b*b-c*c;
	puts(t>0?"acute":t<0?"obtuse":"right");
}
*/
main(a,c,b,t)
{
	scanf("%d%d%d",&a,&b,&c);
	t=a>b&a>c?a:b>c?b:c;
	t=a*a+b*b+c*c-2*t*t;
	puts(t>0?"acute":t<0?"obtuse":"right");
}
