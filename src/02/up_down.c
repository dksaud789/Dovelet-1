/*
 * up_down.c
 *
 *  Created on: Mar 7, 2013
 *      Author: lucas
 */
/*
프로그램 명: up_down
제한시간: 1 초
Nikky 와 Byron 체육시간에 게임을 하고 있다.

선생님이 Nikky 에게는 a 보 전진 후에 b 보 후퇴하게 , Byron 에게는 c 보 전진 후 d 보 후퇴하는 작업을 반복적으로 하게 했다.

둘은 같은 보폭을 가지고 한 보폭당 걸리는 시간이 같다.

s 스텝 이후 선생님이 휘슬을 분 경우 둘 중 누가 처음 위치보다 멀리 가 있는가를 알아내는 프로그램을 하라.

입력

5 개의 정수 a,b,c,d,s 가 주어진다.
단, a,b,c,d 는 100 이하의 정수이고 a > b , c > d 이고 s 는 10000 이하의 정수이다.

출력

세 가지 중 하나를 출력한다.
Nikky
Byron
Tied
입출력 예

입력

4
2
5
3
12

출력

Byron
입출력 보충

Nikky 는 12 스텝 후의 상태는 4 - 2 + 4 - 2 즉 첫 위치에서 4 스텝 만큼 떨어지고 Byron 는 5 - 3 + 4 즉 6 스텝 떨어져서 Byron 이 더 멀리 떨어져 있다.
출처:uwaterloo junior
 */

#include <stdio.h>
/*
void main(void)
{
	int a, b, c, d, s, x, y, z, w;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &s);
	x=z=s;
	y=w=0;
	while (1)
	{
		x-=a;
		y+=a;
		//printf("%3d>x[%d] y[%d]\n", __LINE__, x, y);
		if (0>=x)
		{
			y+=x;
			//printf("%3d>x[%d] y[%d]\n", __LINE__, x, y);
			break;
		}
		x-=b;
		y-=b;
		//printf("%3d>x[%d] y[%d]\n", __LINE__, x, y);
		if (0>=x)
		{
			y-=x;
			//printf("%3d>x[%d] y[%d]\n", __LINE__, x, y);
			break;
		}
	}
	while (1)
	{
		z-=c;
		w+=c;
		//printf("%3d>z[%d] w[%d]\n", __LINE__, z, w);
		if (0>=z)
		{
			w+=z;
			//printf("%3d>z[%d] w[%d]\n", __LINE__, z, w);
			break;
		}
		z-=d;
		w-=d;
		//printf("%3d>z[%d] w[%d]\n", __LINE__, z, w);
		if (0>=z)
		{
			w-=z;
			//printf("%3d>z[%d] w[%d]\n", __LINE__, z, w);
			break;
		}
	}
	puts(y>w?"Nikky":y<w?"Byron":"Tied");
	return;
}
*/
/*
main(a, b, c, d, s, x, y, z, w)
{
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&s);
	x=z=s;
	y=w=0;
	while(1)
	{
		if(0>=(y+=a,x-=a)){y+=x;break;}
		if(0>=(y-=b,x-=b)){y-=x;break;}
	}
	while(1)
	{
		if(0>=(w+=c,z-=c)){w+=z;break;}
		if(0>=(w-=d,z-=d)){w-=z;break;}
	}
	puts(y>w?"Nikky":y<w?"Byron":"Tied");
}
*/
main(a,b,c,d,s,x,y,t)
{
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&s);
	x=s/(a+b)*(a-b);
	t=s%(a+b);
	x+=t>a?a+a-t:t;
	y=s/(c+d)*(c-d);
	t=s%(c+d);
	y+=t>c?c-t+c:t;
	puts(x>y?"Nikky":x<y?"Byron":"Tied");
}
