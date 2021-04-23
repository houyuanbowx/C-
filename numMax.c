#include<stdio.h>
#include<stdlib.h>
int numMax(int x, int y) {
	if (x > y) {
		return x;
	}
	else
		return y;
}
int main() {
	printf("%d\n", numMax(10, 20));
	system("pause");
	return 0;


}