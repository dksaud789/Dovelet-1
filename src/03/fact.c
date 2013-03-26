/*
 * fact.c
 *
 *  Created on: Mar 26, 2013
 *      Author: lucas
 */
/*
프로그램 명: fact
제한시간: 1 초
자연수 n 에 대해서 n!(n 팩토리얼) 은 다음과 같이 약속 한다.


문제는 n 이 주어줄 때 n! 을 구하는 프로그램을 작성하는 것이다.

입력

12 이하인 자연수가 입력으로 주어진다.
출력

n! 값을 출력한다.
입출력 예

입력

5

출력

120
참고

누적 곱의 기호 파이를 알자.

읽을 때는 "파이 ... i 는 1 부터 5 까지 ... i "
 */

#include <stdio.h>

main()
{
	int n,i=1;
	scanf("%d",&n);
	while(n)i*=n--;
	printf("%d",i);
}
