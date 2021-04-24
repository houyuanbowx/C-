#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int arr[], int size) {
	//从后往前遍历
	int bound = 0;
	for (; bound < size; bound++) {
		for (int cur = size - 1; cur > bound; cur--) {
			if (arr[cur - 1] > arr[cur]) {
				int tmp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = tmp;
			}
		}
	}
}

int main() {
	int arr[6] = { 9,5,2,7,3,6 };
	int size = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr,6);
	for (int i = 0; i < 6; i++) {
		printf("%d", arr[i]);

	}
	printf("\n");
	system("pause");
	return 0;
}