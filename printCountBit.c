#include<stdio.h>
#include<stdlib.h>
     //��һ������ÿλ֮��
	 // Ҫ��:дһ������DigitSum(n)������һ���Ǹ����������������������֮��
	 // ���룺1729�������19
     //ʵ�֣�ȡ��ÿһλ�������ۼ�
int  DigitSum(int num) {
	int sum = 0;
	while (num != 0) {
		printf("%d\n", num % 10);
		sum += num % 10;
		num /= 10;
		
	}
	return sum;
}

int main(){
	     int ret = DigitSum(1729);
		 printf("ret = %d\n", ret);
		 system("pause");
		return 0;
	}
	
