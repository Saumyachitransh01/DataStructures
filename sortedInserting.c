#include<stdio.h>

void main(){
    int a[20], n, num;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the number to be inserted: ");
    scanf("%d", &num);
    for(int i = 0; i < n; i++){
        if(a[i] > num){
            for(int j = n-1; j >= i; j--)
                a[j+1] = a[j];
            a[i] = num;
            break;
        }
    }
    n = n + 1;
    printf("\nArray after inserting %d is: \n", num);
    for(int i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
}