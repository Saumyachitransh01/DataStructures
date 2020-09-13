#include<stdio.h>

int main(){
    int arr[20], n, pos, num;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter elements of array: ");
    for(int i = 0; i < n; i++ ){
        printf("\narr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter number to be inserted: ");
    scanf("%d", &num);
    printf("\nEnter position at which it is placed: ");
    scanf("%d", &pos);
    for(int i = n-1; i >= pos; i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = num;
    n = n + 1;
    printf("\nThe array after insertion of %d is: ", num);
    for(int i = 0; i < n; i++){
        printf("\n arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}