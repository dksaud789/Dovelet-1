/*
 * mM.c
 *
 *  Created on: Apr 15, 2013
 *      Author: lucas
 */
/*
프로그램 명: mM
제한시간: 1 초
7 개의 수를 입력으로 받아 입력 받은 수 중 최대값,최소값을 출력하는 프로그램을 작성하시오.

입력

7 개의 수는 100 이하의 자연수이다.
출력

두 수를 출력한다. 첫 수는 최대 , 두 번째수는 최소값이다.
입출력 예

입력

6 2 9 8 3 4 7

출력

9 2
 */

#include <stdio.h>

main()
{
	int a,b,c,i=0;
	b=-1;c=101;
	while(~scanf("%d",&a)&&i++<7)
	{
		b=b<a?a:b;
		c=c>a?a:c;
	}
	printf("%d %d",b,c);
}
