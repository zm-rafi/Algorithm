#include<stdio.h>
int main()
{
    int i,a,b,c,res;
    
    while(1){
        printf("1.add.\n2.substraction\n3.multi");
          scanf("%d",&a);
    switch (a)
    {  
      case 1:
      printf("enter two numbers");
      scanf("%d",&b);
      scanf("%d",&c);
      printf("%d",b+c);
      break;
      case 2:
      printf("enter two numbers");
      scanf("%d",&b);
      scanf("%d",&c);
      printf("%d",b-c);
      break;

    }
    }
   
}