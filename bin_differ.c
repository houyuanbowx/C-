//bin_differ函数求两个数二进制中不同位的个数
//思路：两个数进行异或
//将相同位清零，不同位置1，统计1出现的次数
#include <stdio.h>
#include<stdlib.h>
int bin_differ(int m, int n) {
	int count = 0;
	int tmp = m ^ n;
	while (tmp) {
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}

int main() {
	int m, n;
	printf("%d\n", bin_differ(1999, 2299));
	system("pause");
	return 0;
}
