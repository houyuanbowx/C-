#include<stdio.h>
#include<stdlib.h>
     //求一个数的每位之和
	 // 要求:写一个函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
	 // 输入：1729，输出：19
     //实现：取出每一位，进行累加
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
	
