#include<iostream>
using namespace std;
void printArray(int array[],int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
void insertion_sort(int array[],int n)
{
 for(int i=0;i<n;i++)
 {
   int  key=array[i];
   int  j=i-1;
    while(key<array[j] && j>=0)
    {
        array[j+1]=array[j];
        j--;
    }
    array[j+1]=key;
 }
 
}
int main(){
    
    int array[]={6,5,9,3,7,4};
    int n=6;
    printArray(array,n);
    insertion_sort(array,n);
     printArray(array,n);
    return 0;
}