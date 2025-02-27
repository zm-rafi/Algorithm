#include<bits/stdc++.h>

#define MAX 10

char stack_arr[MAX];
char stack_output_arr[MAX];
char  str1[100];
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
void push(int data){
    if(isFull()){
        printf("Stack overflow");
        return;
    }

    top = top + 1;
    stack_arr[top] = data;
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


// void display() {
//     if(isEmpty()){
//         printf("Empty Stack");
//         return;
//     }

//     for(int i=0;i<=top;i++) {
//         printf("%c ",stack_output_arr[i]);
//     }
//     printf("\n");
// }


int main()
{
    
    
    gets(str1);
    
    for(int i=0;i<strlen(str1);i++)
    {
        push(str1[i]);
    }

    for(int i=0;i<strlen(str1);i++)
    {
        stack_output_arr[i]=pop();
    }

    for(int i=0;i<=strlen(str1);i++) {
        printf("%c ",stack_output_arr[i]);
    }
    

    
}
