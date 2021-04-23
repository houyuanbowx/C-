#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//判断一个数是否为奇数
int main() {
	int num = 0;
	printf("请输入一个整数:");
	scanf("%d", &num);
	if (num % 2 == 0) {
		printf("num 为偶数\n");
	}
	else {
		printf("num 为奇数\n");

	}

	return 0;
}