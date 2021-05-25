#include<stdio.h>
#include<stdlib.h>
    //判断字节序
    //取出编号最小的地址的一个字节，然后进行判断
    //是大端返回1，否则返回0
int isBigEnd() {
	int num = 0x11223344;
	int* p = &num;
	//将int*强制类型转换成char*
	char* p2 = (char*)p;
	if (*p2 == 0x11) {
		return 1;
	}
	return 0;
}

int main() {
	printf("%d\n", isBigEnd());
	system("pause");
	return 0;

}