#include <stdio.h>
#include <ctype.h>
# define MAX 20

int top = -1, stack[MAX];

void push(int number)
{
  stack[++top] = number;
}

int pop()
{
  return stack[top--];
}

int main()
{
  char e[MAX];
  int n1, n2, n3, i = 0;
  scanf("%s", e);
  while(e[i] != '\0')
  {
    if (isdigit(e[i]))
      push(e[i] - 48);
    else
    {
      n1 = pop();
      n2 = pop();
      switch (e[i])
      {
      case '+':
        n3 = n2 + n1;
        break;
      
      case '-':
        n3 = n2 - n1;
        break;
      
      case '*':
        n3 = n2 * n1;
        break;
      
      case '/':
        n3 = n2 / n1;
        break;
      }
      push(n3);
    }
    i++;
  }
  printf("%d", pop());
}
