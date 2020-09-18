#include<stdio.h>

int main(){
    int a[10], b[10], c[20], n1, n2, n3, index = 0;
    printf("Enter number of elements in first array a1: ");
    scanf("%d", &n1);
    printf("Enter elements of a1: ");
    for(int i = 0; i< n1 ; i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter number of elements in second array a2: ");
    scanf("%d", &n2);
    printf("Enter elements of a2: ");
    for(int i = 0; i < n2; i++){
        scanf("%d", &b[i]);
    }
    n3 = n1 + n2;
    for(int i = 0; i < n1; i++){
        c[index] = a[i];
        index++;
    }
    for(int i = 0; i < n2; i++){
        c[index] = b[i];
        index++;
    }
    printf("\nArray after merging: ");
    for(int i = 0; i < n3; i++){
        printf("a[%d] = %d\n", i, c[i]);
    }

    return 0;
}