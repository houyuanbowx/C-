#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//�ж�һ�����Ƿ�Ϊ����
int main() {
	int num = 0;
	printf("������һ������:");
	scanf("%d", &num);
	if (num % 2 == 0) {
		printf("num Ϊż��\n");
	}
	else {
		printf("num Ϊ����\n");

	}

	return 0;
}