#include<stdio.h>

void main(){
    int a[20], n, pos;
    printf("\nEnter number of elements of array: ");
    scanf("%d", &n);
    printf("\nEnter elements of array: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nEnter the position from which the number is to be deleted: \n");
    scanf("%d", &pos);
    for(int i = pos; i < n-1; i++){
        
        a[i] = a[i+1];
    }
    n = n - 1;
    printf("Array after deleting %d position is: \n", pos);
    for(int i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
}