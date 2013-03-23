/*
 * rlpn.c
 *
 *  Created on: Mar 10, 2013
 *      Author: lucas
 */
/*
프로그램 명: rlpn
제한시간: 1 초
2차원 격자공간에 두 개의 꼭짓점 좌표로 표현되는 직사각형이 있다. 직사각형은 아래와 같이 왼쪽 아래 꼭짓점 좌표 (x,y) 와 오른쪽 위 꼭짓점 좌표 (p,q) 로 주어진다.



이 문제에서 모든 직사각형은 두 꼭짓점의 좌표를 나타내는 4개의 정수 x,y,p,q 로 표현된다. 단 항상 x < p , y < q 이다.

예를 들어 위 그림에 제시된 직사각형이라면 아래와 같이 표현된다.

3 2 9 8
두 개의 직사각형은 그 겹치는 부분의 특성에 따라 다음 4가지 경우로 분류될 수 있다.

먼저 두 직사각형의 겹치는 부분이 직사각형인 경우이다. 아래 그림(a)는 공통부분이 직사각형인 경우의 3가지 예를 보여준다,


또는 겹치는 부분이 아래 그림 (b)와 같이 선분이 될 수도 있고, 그림 (c)와 같이 점도 될 수 있다.


마지막으로 아래 그림 (d)와 같이 공통부분 없이 두 직사각형이 완전히 분리된 경우도 있다.


여러분은 두 직사각형의 겹치는 부분이 직사각형인지, 선분인지, 점인지, 아니면 전혀 없는 지를 판별해서 해당되는 코드 문자를 출력해야 한다.

공통 부분의 특징	 출력
직사각형	 rectangle
선분	 line
점	 point
공통부분이 없음	 none
입력

8개의 정수가 하나의 공백을 두고 나타나는데, 첫 4개의 정수는 첫 번째 직사각형을, 나머지 4개의 정수는 두 번째 직사각형을 각각 나타낸다. 단 입력 직사각형의 좌표 값은 1이상 50,000 이하의 정수로 제한된다.
출력

해당 단어를 출력해야 한다.
입출력 예

입력

3 10 50 60 100 100 200 300

출력

none

입력

45 50 600 600 400 450 500 543

출력

rectangle

입력

11 120 120 230 50 40 60 440

출력

rectangle

입력

35 56 67 90 67 80 500 600

출력

line
출처: koi 지역  입출력 수정
 */
#include <stdio.h>
/*
int n[9];
void main(c)
{
	scanf("%d%d%d%d%d%d%d%d", n, n+1, n+2, n+3, n+4, n+5, n+6, n+7);
	if (n[2] < n[4] | n[6] < n[0] | n[3] < n[5] | n[7] < n[1])
	{
		puts("none");
	}
	else if ((n[0] == n[6] || n[2]==n[4]) && (n[1]==n[7] || n[3]==n[5]))
	{
		puts("point");
	}
	else if (((n[0]==n[6] || n[2]==n[4]) && n[1]<=n[7] && n[5]<=n[3]) ||
			 ((n[3]==n[5] || n[7]==n[1]) && n[0]<=n[6] && n[4]<=n[2]))
	{
		puts("line");
	}
	else
	{
		puts("rectangle");
	}
	return;
}
*/
int n[9];
void main(c)
{
	scanf("%d%d%d%d%d%d%d%d",n,n+1,n+2,n+3,n+4,n+5,n+6,n+7);
	if(n[2]<n[4]|n[6]<n[0]|n[3]<n[5]|n[7]<n[1])puts("none");
	else if((n[0]==n[6]||n[2]==n[4])&&(n[1]==n[7]||n[3]==n[5]))puts("point");
	else if(((n[0]==n[6]||n[2]==n[4])&&n[1]<=n[7]&&n[5]<=n[3])||((n[3]==n[5]||n[7]==n[1])&&n[0]<=n[6]&&n[4]<=n[2]))puts("line");
	else puts("rectangle");
}