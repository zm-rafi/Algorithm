#include<bits/stdc++.h>
using namespace std;
#define MAX 100

char stack_arr[MAX];

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
void push(char data){
    if(isFull()){
        printf("Stack overflow");
        return;
    }

    
    stack_arr[++top] = data;
    
}
char pop() {
    char value;
    if(isEmpty()) {
        printf("Stack underflow");
        exit(1);
    }

    value = stack_arr[top];
    top = top - 1;
    
    return value;
    
}
int main()
{
    
    char str[100];
    gets(str);
    
    
    for(int i=0;i<strlen(str);i++)
    {
      if(str[i]!=' ')
      {
         push(str[i]);  
      }
      else{
        while(top!=-1)
        {
           cout<<pop();
        }
        cout<<" ";
      }
    }
      while(top!=-1)
        {
           cout<<pop();
        }
      cout<<endl;
   
    }
   
