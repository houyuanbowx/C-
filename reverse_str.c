//reverse_strº¯ÊıÊµÏÖ×Ö·û´®ÄæĞò
#include <stdio.h>
#include<stdlib.h>	
void reverse_str(char* arr ) {
	int left = 0;
	int right = strlen(arr) - 1;
	while (left < right) {
		char tmp = *(arr + left);
		*(arr + left) = *(arr + right);
		*(arr + right) = tmp;
		left++;
		right--;
	}
}

int main() {
	char arr[] = "abcdef";
	reverse_str(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}

