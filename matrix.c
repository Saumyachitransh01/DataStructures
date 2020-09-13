#include<stdio.h>

void main(){
    int a[3][3], transpose[3][3];
    printf("Enter the contents of Matrix: \n");

    for( int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            transpose[j][i] = a[i][j];
        }
    printf("Initial Matrix: \n");
    for( int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of Matrix: \n");
    for( int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
}