#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>   
 //Ҫ������������С������ |
//����Ҫ������������A��B eg:5 7
//�����35
int MinCommonMultiple(int x, int y) {
	//1.���ҵ� x y�Ľϴ�ֵ
	int maxNum = x > y ? x : y;
	for (int i = maxNum; i < x * y; i++) {
		if (i % x == 0 && i % y == 0) {
			return i;
		}
	}
}
int main() {
	while (1) {
		int x = 0;
		int y = 0;
		//scanf����ֵ��ʾ���������ݵĸ���
		int n=scanf("%d %d", &x, &y);
		if (n < 2) {
			break;
		}
		int result = MinCommonMultiple(x, y);
		printf("%d\n", result);
	}
	system("pause");
	return 0;
}