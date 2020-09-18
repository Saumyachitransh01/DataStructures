#include<stdio.h>

int main(){
    int a[10], b[10], c[20], n1, n2, n3, index_first = 0, index_second = 0, index = 0;
    printf("Enter number of elements in A1: ");
    scanf("%d", &n1);
    printf("Enter elements of A1: ");
    for(int i = 0; i <n1 ; i++){
        printf("a1[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\nEnter number of elements in A2: ");
    scanf("%d", &n2);
    printf("Enter elements of A2: ");
    for(int i =0; i < n2; i++){
        printf("a2[%d] = ", i);
        scanf("%d", &b[i]);
    }
    n3 = n1 + n2;
    while(index_first < n1 && index_second < n2){
        if(a[index_first] < b[index_second]){
            c[index] = a[index_first];
            index_first++;
            
        }else{
            c[index] = b[index_second];
            index_second++;
        }
        index++;
    }
    if(index_first == n1){
        while(index_second < n2){
            c[index] = b[index_second];
            index_second++;
            index++;
        }
    }
    else if(index_second == n2){
        while(index_first < n1){
            c[index] = a[index_first];
            index_first++;
            index;
        }
        
    }
    printf("\nArray after merging both a1 and a2: ");
    for(int i = 0; i < n3; i++){
        printf("a[%d] = %d\n", i, c[i]);
    }
    return 0;
}