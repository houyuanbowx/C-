#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//���û�����1-7���֣���ʾ����һ��������
int main() {
	int day = 0;
	printf("������һ��1-7������ \n");
	scanf("%d", &day);
	switch(day) {
		case 1:
			printf(" ����һ\n");
			break;
		case 2:
			printf(" ���ڶ� \n");
			break;
		case 3:
			printf(" ������\n");
			break;
		case 4:
			printf(" ������\n");
			break;
		case 5:
			printf("������ \n");
			break;
		case 6:
			printf(" ������\n");
			break;
		case 7:
			printf(" ������\n");
			break;
		default:
			printf("������������!\n");
	}

	     return 0;
}