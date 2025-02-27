#include<bits/stdc++.h>
using namespace std;
#define MAX 10
int stk[MAX];

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
void deleteMid(int stk[],int n,int i)
{   
        
    if(top==-1||i==n)
    {    
        return;
    }
   int m =  pop();
   

   deleteMid(stk,n,++i);

   int mid =(n/2)+1;     
}
int main()
{
    int stk1[100];
    int n,i,ele,k,j;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>ele;
        push(ele);
    }cout<<stk[0];
    deleteMid(stk,stk1,n,i,j);
    
}