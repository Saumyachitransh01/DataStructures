#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 50
int s[SIZE];
int top = -1;

void push(int elem)
{
    top = top + 1;
    s[top] = elem;
}
int pop()
{
    return (s[top--]);
}
int main()
{
    char postfix[50], ch;
    int i = 0, opt1, opt2;
    printf("\n\nRead the Postfix Expression: ");
    scanf("%s", &postfix);
    while ((ch = postfix[i++]) != '\0')
    {
        if (ch >= '0' && ch <= '9')
            push(ch - '0');
        else
        {
            opt2 = pop();
            opt1 = pop();
            switch (ch)
            {
            case '+':
                push(opt1 + opt2);
                break;
            case '-':
                push(opt1 - opt2);
                break;
            case '*':
                push(opt1 * opt2);
                break;
            case '/':
                push(opt1 / opt2);
                break;
            }
        }
    }
    printf("\n Given postfix exp: %s \n", postfix);
    printf("\n Result of expression: %d\n", s[top]);
}