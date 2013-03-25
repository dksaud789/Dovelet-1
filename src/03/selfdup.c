/*
 * selfdup.c
 *
 *  Created on: Mar 25, 2013
 *      Author: lucas
 */
/*
프로그램 명: selfdup
제한시간: 1 초
어떤 자연수 N 을 제곱했을 때, 그 제곱수의 맨 뒷자리에 원래의 수 N이 다시 나타나면, 우리는 그 수 N을 자기복제수라고 하자.

예를 들면, 5의 제곱은 25이고 25의 맨 뒷자리에 원래의 수 5가 나타나기 때문에 자기복제수가 된다. 또 다른 예로, 자기복제수가 되는 수로는76이 있다. (76^2 = 5776)

자연수 1 에서 10000 까지의 수 중에서 자기 복제수인 수를 모두 출력하는 문제이다.

입력

입력은 없다.
출력

크기 순으로 한 줄에 하나씩 출력한다.
입출력 예


출력

1
5
...
출처:제 6 회 대학생 프로그래밍 경시대회 문제 B (입출력 수정)
 */

#include <stdio.h>
/*
main()
{
	int i, m;
	for(i=1;i<=10000;i++)
	{
		if(i<10)
		{
			m=10;
		}
		else if (i<100)
		{
			m=100;
		}
		else if(i<1000)
		{
			m=1000;
		}
		else if(i<10000)
		{
			m=10000;
		}
		if(i==(i*i)%m)
		{
			printf("%d\n",i);
		}
	}
}
*/

main()
{
	int i, m=10;
	for(i=1;i<=10000;i++)
	{
		if(i/m>1)m*=10;
		if(i==(i*i)%m)
		{
			printf("%d\n",i);
		}
	}
}
