#include<stdio.h>
#include<stdlib.h>
//ReverseStringʵ���ַ������򣬲��������ӡ
//���Ƿ�������
void ReverseString(char str[]) {
	int left = 0;
	int right = strlen(str) - 1;
	while (left < right) {
		//����left ��rightλ�õ�Ԫ��
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