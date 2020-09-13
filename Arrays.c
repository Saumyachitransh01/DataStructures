#include<stdio.h>
#include<stdlib.h>

void main(){
    int choice, a[100], n=0, t, k, i, j;
    while(1){
        printf("\n1. Insert a new element\n2. Delete an element\n3.Display\n4.Exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1: printf("\nEnter the number you want to insert: ");
                    scanf("%d", &t);
                    printf("\nEnter the index of location: ");
                    scanf("%d", &k);
                    if(k<=n){
                        for(i = n-1; i >= k; i--){
                            a[i+1] = a[i];
                        }
                        a[k] = t;
                        n = n+1;
                    }
                    else printf("Error");
                    break;
            case 2: printf("Enter the index locations: ");
                    scanf("%d", &k);
                    if(k<n){
                        j = a[k];
                        printf("Deleted item = %d\n", j);
                        for( i = k; i < n-1; i++){
                            a[i] = a[i+1];
                        }
                        n = n-1;
                    }
                    else printf("Error\n");
                    break;
            case 3: if (n==0) printf("No Elements\n");
                    else{
                        for ( j = 0; j < n; j++)
                        printf("[%d]", a[j]);
                    }
                    printf("\nNumber of elements in Array = %d\n",n);
                    break;
            case 4: exit(0);
                    printf("\n");
        }
    }
}