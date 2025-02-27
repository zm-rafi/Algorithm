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
void push(int data)
{
    if(isFull()){
        printf("Stack overflow");
        return;
    }

    top = top + 1;
    stack_arr1[top] = data;
}
int pop() {
    int value;
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
    else
    {
        value = stack_arr2[top];
    top = top - 1;
    return value;
    }
    
}
void implementQueue()
{

}
int main()
{
    int n,i;
   printf("the number of element:");
   cin>>n;
   for(i=0;i<n;i++)
   {
    cin>>stack_arr1[i];
    push(stack_arr1[i]);
   }
   for(i=0;i<n;i++)
   {
     stack_arr2[i] = pop();
     cout<<stack_arr2[i];
   }
   for(i=0;i<n;i++)
   {
     stack_arr1[i] = pop();
     cout<<stack_arr2[i];
   }
}