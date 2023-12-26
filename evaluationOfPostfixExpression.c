#include<stdio.h>
#include<ctype.h>

int stack[20];
int top=-1;

void push(int x)
{
        stack[++top]=x;
}

int pop()
{
        return stack[top--];
}

int main()
{
        char exp[20],*e;
        int n1,n2,n3,num;
        printf("Enter the expression:");
        scanf("%s",exp);
        e=exp;
