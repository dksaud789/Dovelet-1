/*
 * chemistry.c
 *
 *  Created on: Apr 8, 2013
 *      Author: lucas
 */
/*
프로그램 명: chemistry
제한시간: 1 초
화학실험을 하는 동안 매 분당 온도를 적어놓았다.
현재 온도와 바로 전 온도 뺀 값을 출력하는 프로그램을 작성하시오.

입출력 예에서는

10.0
12.05 ... 12.05 - 10.0 =  2.05
30.25 ... 30.25 - 12.05 =  18.20
20    ... 20 - 30.25 = -10.25
999
입력

입력은 일련의 온도가 입력으로 주어진다. 온도의 범위는 -10 에서 200 사이이다. 온도는 소수이하 2 자리까지 주어지고 , 999 는 입력의 끝을 나타낸다.
적어도 2 개 이상의 온도가 입력으로 주어진다.

출력

차이는 소수이하 2 자리로 출력한다.

1.2 라면 1.20 로
0.1 이라면 0.10 으로
1.2 인 경우 1.20 으로
출력의 마지막에는 End of Output 을 출력한다.

입출력 예

입력

10.0
12.05
30.25
20
999

출력

2.05
18.20
-10.25
End of Output

출처: Mid-Atlantic 2002
 */

#include <stdio.h>

main()
{
	double a,b=-11;
	while(~scanf("%lf",&a)&&a!=999)
	{
		if(b>-11)printf("%.2f\n",a-b);
		b=a;
	}
	puts("End of Output");
}
