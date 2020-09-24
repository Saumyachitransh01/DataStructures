#include<stdio.h>
#include<conio.h>
#include<process.h>
int a[15], n, choice, b, num, max, temp, i, j;
void Display();
int main(){
    clrscr();
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements of array: ");
    for( i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    while(1){
        
        printf("Enter your choice: \n1.Insert Element\n2.Insert at Middle\n3.Delete Element at index 2.\n4.Sorting in Decreased Order\n5.Display\n6.Exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1: printf("Enter the index at which number is to be inserted: ");
                    scanf("%d",&b);
                    printf("Enter element to insert: ");
                    scanf("%d", &num);
                    for( j = n-1; j >= b; j--){
                        a[j+1] = a[j];
                    }
                    a[b] = num;
                    n = n + 1;
                    break;
            case 2: printf("Enter the element to be inserted: ");
                    scanf("%d", &num);
                    if(n%2==0){
                        //inserting at n/2th position
                        b = n/2;
                        for( i = n-1; i>=b; i--){
                            a[i+1] = a[i];
                        }
                        a[b] = num;
                        n = n + 1;
                    }else{
                        //inserting at (n-1)/2th position
                        b = (n-1)/2;
                        for( i = n-1; i >= b; i--){
                            a[i+1] = a[i];
                        }
                        a[b] = num;
                        n = n+1;
                    } 
                    break;
            case 3: if(n>=3) {
                        for( i = 2; i < n; i++){
                            a[i] = a[i+1];
                        }
                        n = n - 1;
                    }else{
                        printf("Not sufficient elements for Deletion");
                    }
                    break;
            case 4: for( i = 0; i < n - 1; i++){
                        max = i;
                        for( j = i+1; j<n; j++){
                            if(a[j] > a[max])
                                max = j;
                        }
                        temp = a[i];
                        a[i] = a[max];
                        a[max] = temp;
                    }
                    break;
            case 5: Display(); break;
            case 6: exit(0);
        }
       
    }
    return 0;
    getch();
}
void Display(){
    if(n == 0){
        printf("Array is empty!");
    }else{
        for(int i = 0; i < n; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    }
    
}