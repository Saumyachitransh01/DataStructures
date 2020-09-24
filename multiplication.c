#include<stdio.h>
#include<stdlib.h>

void main(){
    int arr1[10][10], arr2[10][10], res[10][10];
    int row1, col1, row2, col2, res_row, res_col;
    printf("\nEnter the number of rows of first matrix: ");
    scanf("%d", &row1);
    printf("Enter the number of columns of first matrix: ");
    scanf("%d", &col1);
    printf("Enter number of rows in second matrix: ");
    scanf("%d", &row2);
    printf("Enter the number of column of second matrix: ");
    scanf("%d", &col2);
    if(col1 != row2){
        printf("Number of column in first matrix should be equal to rows in second matrix\n");
        exit(1);
    }
    res_row = row1;
    res_col = col2;
    printf("Enter elements of first matrix: ");
    for(int i = 0; i < row1; i++){
        for(int j = 0; j < col1; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter elements of second matrix: ");
    for(int i = 0; i < row2; i++){
        for(int j = 0; j < col2; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    for(int i = 0; i < res_row; i++){
        for(int j = 0; j < res_col; j++){
            res[i][j] = 0;
            for(int k = 0; k <res_col; k++)
                res[i][j] += arr1[i][k]*arr2[k][j];
        }
    }
    printf("Elements of product matrix: \n");
    for(int i = 0; i < res_row; i++){
        printf("\n");
        for(int j = 0; j < res_col; j++)
        printf("\t%d", res[i][j]);
    }
    printf("\n");
}