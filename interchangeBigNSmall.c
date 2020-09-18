#include<stdio.h>

void read_array(int arr[], int );
void interchange(int arr[], int );
void display(int arr[], int);
int find_smallest(int arr[10], int n);
int find_biggest(int arr[10], int n);

int main(){
    int arr[10], n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    read_array(arr, n);
    interchange(arr, n);
    printf("The new array is: \n");
    display(arr, n);
    return 0;
}
void read_array(int arr[10], int n){
    for(int i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
void interchange(int arr[10], int n){
    int small, big, temp;
    small = find_smallest(arr, n);
    big = find_biggest(arr, n);
    temp = arr[small];
    arr[small] = arr[big];
    arr[big] = temp; 
}
void display(int arr[10], int n){
    for(int i = 0; i < n; i++){
        printf("a[%d] = %d\n", i, arr[i]);
    }
}

int find_biggest(int arr[10], int n){
    int big = arr[0];
    int big_pos = 0;
    for(int i = 1; i < n; i++){
        if( big < arr[i]){
            big = arr[i];
            big_pos = i;
        }
    }
    return big_pos;
}
int find_smallest(int arr[10], int n){
    int small = arr[0];
    int small_pos = 0;
    for(int i = 1; i < n; i++){
        if( small > arr[i]){
            small = arr[i];
            small_pos = i;
        }
    }
    return small_pos;
}