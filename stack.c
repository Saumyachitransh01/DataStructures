#include<stdio.h>
#include<stdlib.h>

int stack[5], top;
void Push(int);
int Pop();
void main(){
    int choice, item, i;
    top = -1;
    while(1)
    {
        printf("1. Push \n2.Pop\n3.Display\n4.Exit\nEnter your Choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: if(top == 4) printf("OverFlow Error\n");
                    else{
                        printf("Enter the element you want to push\n");
                        scanf("%d", &item);
                        Push(item);
                    }
                    break;
            case 2: if(top == -1){
                        printf("Underflow Error\n");
                    }else{
                        item = Pop();
                        printf("Deleted Element is= %d\n", item);
                    }
                    break;
            case 3: if(top == -1)
            printf("Stack is Empty");
            else{
                for(int i = 0; i<= top; i++){
                    printf("%d\t", stack[i]);

                }
                printf("\n");
            } 
            break;
            case 4: exit(0);
        }
    }
}
void Push(int item){
    top++;
    stack[top] = item;
}
int Pop(){
    int t;
    t = stack[top];
    top--;
    return t;
}