#include<stdio.h>
#include<stdlib.h>
    //�ж��ֽ���
    //ȡ�������С�ĵ�ַ��һ���ֽڣ�Ȼ������ж�
    //�Ǵ�˷���1�����򷵻�0
int isBigEnd() {
	int num = 0x11223344;
	int* p = &num;
	//��int*ǿ������ת����char*
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