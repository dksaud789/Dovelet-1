/*
 * nfactor.c
 *
 *  Created on: Apr 19, 2013
 *      Author: lucas
 */
/*
프로그램 명: nfactor
제한시간: 1 초
수 하나를 입력으로 받아 이 수의 약수의 개수를 구하는 프로그램을 작성하시오.
입력

입력으로 1 이상 10000 이하의 자연수가 주어진다.
출력

약수의 개수를 출력한다.
입출력 예

입력

4

출력

3

입력

6


출력

4
 */

#include <stdio.h>

main()
{
	int n,i,c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		if(0==n%i)c++;
	printf("%d",c);
}
