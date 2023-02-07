#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int top = -1, stack[MAX];
void push();
void pop();
void display();
void main()
{
    int ch;
    while (1)
    {
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            exit(0);
            break;
        default:
            printf("Invalid input\n");
        }
    }
}
void pop()
{
    int val;
    if (top == -1)
    {
        printf("\nStack is empty!!");
    }
    else
    {
        top--;
    }
}
void push()
{
    int val;
    if (top == MAX - 1)
    {
        printf("\nStack is full!!");
    }
    else
    {
        scanf("%d", &val);
        top = top + 1;
        stack[top] = val;
    }
}
void display()
{
    int i = top;
    if (top == -1)
    {
        printf("\nStack is empty!!");
    }
    else
    {
        while (i >= 0)
        {
            printf("%d\n", stack[i]);
            i--;
        }
    }
}
