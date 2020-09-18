#include<stdio.h>

int main(){
    int a[20], n, num;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("\nEnter elements of array: ");
    for(int i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("Enter element to delete: \n");
    scanf("%d", &num);
    for(int i = 0; i < n;i++){
        if(a[i] == num){
            for(int j = i; j < n-1; j++){
                a[j] = a[j+1];
            }
            n = n-1;
        }
    }
    
    printf("Array after deleting %d: \n", num);
    for(int i = 0 ; i < n; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}