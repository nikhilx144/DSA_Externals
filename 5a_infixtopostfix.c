#include <stdio.h>
#include <ctype.h>

int top = -1;
char stack[50];

void push(char c)
{
  stack[++top] = c;
}

char pop()
{
  if (top == -1)
    return -1;
  else
    return stack[top--];
}

int priority(char a)
{
  if (a == '(')
    return 0;
  if (a == '+' || a == '-')
    return 1;
  if (a == '*' || a == '/')
    return 2;
  return 0;
}

int main()
{
  char e[100];
  char *ptr, x;
  scanf("%s", e);
  ptr = e;
  while (ptr != '\0')
  {
    if (isalnum(*ptr))
      printf("%c", *ptr);
    else if (*ptr == '(')
      push(*ptr);
    else if (*ptr == ')')
    {
      while ((x = pop()) != '(')
        printf("%d", x);
    }
    ptr++;
  }
  while (top != -1)
    printf("%c", pop());
  return 0;
}