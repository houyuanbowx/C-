#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>   
 //要求：两个数的最小公倍数 |
//输入要求：两个正整数A和B eg:5 7
//输出：35
int MinCommonMultiple(int x, int y) {
	//1.先找到 x y的较大值
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
		//scanf返回值表示读到的数据的个数
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