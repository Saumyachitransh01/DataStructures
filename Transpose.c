#include <stdio.h>
int main() {
    int a[5][5], transpose[5][5], r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter matrix elements:\n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            scanf("%d", &a[i][j]);
        }

   
    printf("\nEntered matrix: \n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            printf("%d  ", a[i][j]);
            if (j == c - 1)
                printf("\n");
        }

    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            transpose[j][i] = a[i][j];
        }
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < c; ++i)
        for (int j = 0; j < r; ++j) {
            printf("%d  ", transpose[i][j]);
            if (j == r - 1)
                printf("\n");
        }
    return 0;
}