#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int x;

	printf("���ڸ� �Է��ϼ��� :");
	scanf("%d", &x);

	if (x % 2 == 0)
	{
		printf("¦���Դϴ�.\n");
	}
	else
	{
		printf("Ȧ���Դϴ�.\n");
	}


	return 0;
}
