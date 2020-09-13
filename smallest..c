#include<stdio.h>

void main(){
    int arr[20], n;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    // FOR FINDING MINIMUM NUMBER WITH IT'S INDEX
    int min = arr[0];
    int indexOfMin = 0;
    for(int i = 0; i < n; i++){
        if(min > arr[i]){
            min = arr[i];
            indexOfMin = i;
        } 
    }
    printf("\nSmallest number is: %d", min);
    printf("\nIndex of the smallest number in array is: %d\n", indexOfMin);
    
    // FOR FINDING MAXIMUM NUMBER WITH IT'S INDEX
    int max = arr[0];
    int indexOfMax = 0;
    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
            indexOfMax = i;
        }
    }
    printf("\nLargest number is: %d", max);
    printf("\nIndex of the largest number in array is: %d\n", indexOfMax);
}