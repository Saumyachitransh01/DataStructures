#include<stdio.h>

int main(){
    int arr[20], n, sum=0;
    float mean;
    printf("Enter number of terms to find mean: ");
    scanf("%d", &n);
    for(int i = 0; i < n ;i++){
        printf("Enter your number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i=0; i < n; i++){
        sum += arr[i];
    }
    mean = (float)sum/n;
    printf("\nThe sum of numbers = %d", sum);
    printf("\nMean of given data = %.2f\n", mean);
    return 0;
}