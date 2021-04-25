#include<stdio.h>
#include<stdlib.h>
//实现数组内容的交换
int main(){
    int arr1[4] = { 1,2,3,4 };
    int arr2[4] = { 5,6,7,8 };
    int i = 0;
    for (; i < 4; i++) {
        int temp;
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
    for (i = 0; i < 4; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (i = 0; i < 4; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}