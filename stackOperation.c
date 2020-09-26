#include<stdio.h>
#include<stdlib.h>
#define MAX 3

void main(){
    int st[MAX], top = -1;
    void push(int st[], int val);
    int pop(int st[]);
    int peek(int st[]);
    void display(int st[]);
    
    int main(int args, char *args[]){
        int val, option;
        do{
            printf("\n ---------MAIN MENU---------");
            printf("\n1. PUSH\n2. POP\n3. PEEK\n4. DISPLAY");
            printf("\nEnter your option: ");
            scanf("%d", &option);
            switch (option)
            {
            case 1:   
                    printf("Enter element to be pushed on stack:");
                    scanf("%d", &val);
                    push(st, val);
                    break;
            case 2: 
                    val = pop(st);
                    if(val != -1)
                    printf("Element popped from stack: %d", val);
                    break;
            case 3: 
                    val = peek(st);
                    
                    printf("")
            default:
                break;
            }
        }
    }
}