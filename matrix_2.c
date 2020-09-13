#include<stdio.h>

void main(){
    int a[3][3], b[3][3], c[3][3];
    printf("Enter the contents of Matrix 1: \n");

    for( int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the contents of Matrix 2: \n");

    for( int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3 ;j++){
            c[i][j] = a[i][j] + b[i][j];
            }
            
    }
    
    printf("\nContents of Resultant Matrix: \n");
    for( int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}