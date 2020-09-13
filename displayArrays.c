#include<stdio.h>
// #include<stdlib.h>

void main(){
    int arr[10], n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("\n a[%d] =  ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n Elements of array: ");
    for(int i = 0; i < n; i++){
        printf("[%d]\t", arr[i]);
    }
}