#include<bits/stdc++.h>
#include<math.h>

using namespace std;
#define MAX 10
char stk[MAX];
//int stack_arr[MAX];
int top = -1;

int isFull() {
    if(top ==MAX-1)
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
void push(int data)
{
    if(isFull()){
        printf("Stack overflow");
        return;
    }

    top = top + 1;
    stk[top] = data;
}
int pop() {
    int value;
    if(isEmpty()) {
        printf("Stack underflow");
        exit(1);
    }

    value = stk[top];
    top = top - 1;
    return value;
}
int postfixOperation(char str[])
{
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            push((int)str[i]-48);
        }
        else
        {
           int  opr1=pop();
           int  opr2=pop();
            switch (str[i])
            {
                case '+' :
                push(opr2+opr1);
                break;
                case '-' :
                push(opr2-opr1);
                break;
                case '*' :
                push(opr2*opr1);
                break;
                case '/' :
                push(opr2/opr1);
                break;
            }
        }
    }
    return stk[top];
}
int main() {
    char str[100];
    gets(str);
    //46+2/5*7+
    
    int d=postfixOperation(str);
    printf("%d",d);
    return 0;
}