#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
/// 求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和
/// a是一个数字，
int main() {
	int a = 0;
	int sum = 0;
	int tmp = 0;
	printf("输入一个数:");
	scanf("%d", &a);
	for (int i = 0; i < 5; i++) {
		tmp = tmp * 10 + a;
		sum += tmp;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}