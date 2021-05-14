#include<stdio.h>
#include<stdlib.h>
//ReverseString实现字符串逆序，不是逆序打印
//而是反向排列
void ReverseString(char str[]) {
	int left = 0;
	int right = strlen(str) - 1;
	while (left < right) {
		//交换left 和right位置的元素
		char tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}
int main() {
	char str[]="abcd";
	ReverseString(str);
	printf("%s", str);
	system("pause");
	return 0;

}