/*
 * factor.c
 *
 *  Created on: Apr 18, 2013
 *      Author: lucas
 */
/*
프로그램 명: factor
제한시간: 1 초
주어지는 수의 약수를 출력하는 문제이다.
입력

10000 이하의 자연수가 입력으로 주어진다.
출력

작은 수부터 한 줄에 한 개씩 출력한다.
입출력 예

입력

4

출력

1
2
4

입력

6

출력

1
2
3
6
 */

#include <stdio.h>

/*
int a[101];
main(i)
{
	i=0;
	scanf("%d",a+1);
	while(++i*i<=a[1])
	if(a[1]==a[1]/i*i)
	{
		a[i]=a[1]/i;
		printf("%d\n",i);
		if(i>=a[i])break;
	}
	while(--i>0)if(i<a[i])printf("%d\n",a[i]);
}
*/

main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		if(0==n%i)printf("%d\n",i);
}

/*
int main(void)
{
    int n;
    int i;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d\n", i);
    }
    return 0;
}
 */
