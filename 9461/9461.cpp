// 9461.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <stdio.h>
int main()
{
	
	long long arData[101]{};

	arData[1] = 1;
	arData[2] = 1;
	arData[3] = 1;
	arData[4] = 2;
	arData[5] = 2;

	for (int i = 6; i < 101; i++)
	{
		arData[i] = arData[i - 1] + arData[i-5];
	}

	int nTestCase(0);
	int nInput(0);

	scanf_s("%d", &nTestCase);

	while (nTestCase--)
	{
		scanf_s("%d", &nInput);
		printf("%lld\n", arData[nInput]);
	}

	
    return 0;
}

