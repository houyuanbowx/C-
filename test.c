#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//输出1-100之间的奇数
int main() {
	int num = 1;
	while (num <= 100) {
		if (num % 2 == 0) {
			printf("num %d 为偶数\n", num);
		}
		else {
			printf("num %d 为奇数\n", num);

		}
		num++;
	}
	
	return 0;
}