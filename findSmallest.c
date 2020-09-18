#include<stdio.h>

void read_array(int arr[], int n);
int find_small(int arr[], int n);
int main(){
    int num[10], n, smallest;
    printf("\nEnter number of elements in array: ");
    scanf("%d", &n);
    read_array(num, n);
    smallest = find_small(num, n);
    printf("\nSmallest number in array is: %d\n", smallest);

    return 0;   
}

void read_array(int arr[10], int n){
    for(int i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);   
    }
}

int find_small(int arr[10], int n){
    int min = arr[0];
    
    for(int i = 1; i < n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}