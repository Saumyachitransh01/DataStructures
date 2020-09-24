#include<stdio.h>

int main(){
    int arr[5][5], row, col;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    
    printf("Enter number of columns: ");
    scanf("%d", &col);
    printf("Enter elements of array: ");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Array: ");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d\t", arr[i][j]);
        }
    }
            printf("\n");

    return 0;
}