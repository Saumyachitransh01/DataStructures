#include<stdio.h>

void main(){
    int arr[20], n, flag = 0;
    printf("Enter the number of terms in array: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }    
    for(int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++)
        {
            if(arr[i] == arr[j] && i != j){
                flag = 1;
                printf("\nDuplicates fount at index %d and %d ", i, j);
                break;
            }
            // if(flag == 1){
            // printf("Duplicate Element: %d", arr[i]);
        }
        
    }
    if(flag == 0){
        printf("No duplicates");
    }
}

// #include <stdio.h>

// int main(){
// int array[10], i, n, j, flag =0;
// printf("\n Enter the size of the array : ");
// scanf("%d", &n);
// for(i=0;i<n;i++)
// {
		
// printf("\n array[%d] = ", i);
		
// scanf("%d", &array[i]);
// }
// for(i=0;i<n;i++)
// {
		
// for(j=i+1;j<n;j++)
		
// {
			
// if(array[i] == array[j] && i!=j)
			
// {
			
// flag =1;
			
// printf("\n Duplicate numbers found at locations %d and %d", i, j);
			
// }
		
// }
// }
// if(flag==0)
		
// printf("\n No Duplicates Found");
// return 0;
// }