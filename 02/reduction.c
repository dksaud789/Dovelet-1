/*
 * reduction.c
 *
 *  Created on: Mar 7, 2013
 *      Author: lucas
 */
/*
프로그램 명: reduction
제한시간: 1 초
560 * 400 밀리미터 이미지를 표준 용지( 218 * 280 mm) 로 복사하려고 한다.

이 복사기는 축소 기능이 있어 용지에 맞게 가능한 크게 복사하려고 하는 경우 50 % 축소 복사하면 된다. 물론 90 도 회전 할수도 있다.( 랜드스케이프 모드)



문제는 복사할 이미지와 복사용지가 주어질 때 이 이미지를 복사용지에 잘림이 없이 최대로 넣기 위한 위한 축소 % 를 구하는 문제이다.

입력

4 개의 정수가 입력으로 주어진다. 처음 두 수는 복사할 이미지의 크기이고 다음 두 수는 복사용지의 크기이다.
출력

답은 1 에서 100% 사이의 정수이다.
입출력 예

입력

560 400 218 280

출력

50%

입력

10 25 88 10

출력

100%

입력

8 13 5 1

출력

12%

입력

199 333 40 2

출력

1%
출처:Mid-Central USA 2005
 */

#include <stdio.h>
/*
void main(void)
{
	int x, y, w, h, t;
	scanf("%d%d%d%d", &x, &y, &w, &h);
	if(x>y){t=x;x=y;y=t;}
	if(w>h){t=w;w=h;h=t;}
	if(x<=w&&y<=h) puts("100%");
	else printf("%d%%",w*y<x*h?w*100/x:h*100/y);
	return;
}
*/
main(x,y,w,h,t)
{
	scanf("%d%d%d%d",&x,&y,&w,&h);
	if(x>y){t=x;x=y;y=t;}
	if(w>h){t=w;w=h;h=t;}
	if(x<=w&&y<=h)puts("100%");
	else printf("%d%%",w*y<x*h?w*100/x:h*100/y);
}
