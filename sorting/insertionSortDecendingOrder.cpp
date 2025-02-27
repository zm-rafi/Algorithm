#include<iostream>
using namespace std;
void printArray(int array[],int n){
       for(int i =0;i<n;i++){
        cout<<array[i]<<" ";
       }
       cout<<endl;
}
void insertionor(int array[],int n){
    for(int i=1;i<n;i++){
        int key= array[i];
        int j  = i-1;
        while(key>array[j] && j>=0){
            array[j+1]=array[j];
            j--;
        }
           array[j+1]=key;
    }
}
int main(){
    int array[]={3,7,9,4,2};
    int n = 5;
    printArray(array,n);
    insertionor(array,n);
    printArray(array,n);
   }