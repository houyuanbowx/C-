//bin_differ�������������������в�ͬλ�ĸ���
//˼·���������������
//����ͬλ���㣬��ͬλ��1��ͳ��1���ֵĴ���
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
