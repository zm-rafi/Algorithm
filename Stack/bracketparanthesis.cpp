
#include<bits/stdc++.h>
using namespace std;
#define MAX 3

int stack_arr[MAX];
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
    int value;
    if(isEmpty()) {
        printf("Stack underflow");
        exit(1);
    }

    value = stack_arr[top];
    top = top - 1;
    return value;
}
void checkValidity(char str[]){
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            push(str[i]);
        }
        else{
            char f=pop();
            if(str[i]==')' && f!='('){
                cout << "Invalid sequences of Brackets" << endl;
                return;
            }
            else if(str[i]=='}' && f!='{'){
                cout << "Invalid sequences of Brackets" << endl;
                return;
            }
            else if(str[i]==']' && f!='['){
                cout << "Invalid sequences of Brackets" << endl;
                return;
            }
        }
    }
    cout << "The sequence of the brackets are valid" << endl;
}
int main()
{
    char str[100];
    gets(str);
    checkValidity(str);

}