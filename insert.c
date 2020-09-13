#include<stdio.h>

void main(){
    int arr[20], n, num, pos;
    printf("\nEnter number of elements: ");
    scanf("%d", &n);
    printf("\nEnter elements of array: ");
    for(int i = 0; i < n ;i ++){
        printf("\n arr[%d]: ", i);
        scanf("%d", &arr[i]);   
    }
       
    printf("\nEnter number to be inserted: ");
    scanf("%d", &num);
    printf("\nEnter position at which it is to be inserted: ");
    scanf("%d", &pos);
    for(int i = n-1; i >= pos; i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = num;
    n = n + 1;
    printf("\n The array after inserting %d is: ", num);
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
}