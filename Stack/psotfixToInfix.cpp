#include<bits/stdc++.h>
using namespace std;
#define MAX 100

int stack_arr1[MAX];
int stack_arr2[MAX];
int top = -1;
int isFull() {
    if(top == MAX-1)
        return 1;
    else
        return 0;
}
int isEmpty() {
    if(top == -1)
        return 1;
    else
        return 0;
}
void push(char data)
{
    if(isFull()){
        printf("Stack overflow");
        return;
    }

    top = top + 1;
    stack_arr1[top] = data;
}
int pop() {
    char value;
    if(isEmpty()) {
        printf("Stack underflow");
        exit(1);
    }
    if(stack_arr1[top]!=-1)
    {
       value = stack_arr1[top];
    top = top - 1;
    return value;
    }
}

int main()
{
    int i,j;
    char str[100];
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>='0'||str[i<='9'])
        {
            push(str[i]);
        }else
        {
           char  opr1=pop();
           char  opr2=pop();

            switch (str[i])
            {
                case '+':
                push(opr1);
                push('+');
                push(opr2);
                break;
                case '-':
                push(opr1);
                push('-');
                push(opr2);
                break;
                case '*':
                push(opr1);
                push('*');
                push(opr2);
                break;
                case '/':
                push(opr1);
                push('/');
                push(opr2);
                break;

            }
        }
    }
    for ( i = 0; i < top; i++)
    {
        printf("%c ",stack_arr1[i]);
    }

}