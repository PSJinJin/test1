#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int x;

	printf("숫자를 입력하세요 :");
	scanf("%d", &x);

	if (x % 2 == 0)
	{
		printf("짝수입니다.\n");
	}
	else
	{
		printf("홀수입니다.\n");
	}


	return 0;
}
