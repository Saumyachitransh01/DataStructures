#include<stdio.h>

void main(){
    int arr[20], n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    int secondLargest = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != max){
            if(secondLargest < arr[i] ){
                secondLargest = arr[i];
            }
        }
    }
    printf("Largest Number is: %d\n", max);
    printf("Second largest number is: %d\n", secondLargest);
}