#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//���1-100֮�������
int main() {
	int num = 1;
	while (num <= 100) {
		if (num % 2 == 0) {
			printf("num %d Ϊż��\n", num);
		}
		else {
			printf("num %d Ϊ����\n", num);

		}
		num++;
	}
	
	return 0;
}