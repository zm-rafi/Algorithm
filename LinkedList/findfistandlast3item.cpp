#include<iostream>
struct list{
    int value;            
     list  *next;           
};
struct list *head;
struct list *cur;
struct list *temp;
struct list *prev;

typedef struct list node;
void insertion(int ele){
           temp = new node();
           temp->value=ele;
           temp->next=NULL;
           temp->next=head;
           head=temp;
}
void prrint(){
     if(head->next==NULL){
          printf("the list is empty");
          return;
     }
     cur=head;
     while(cur->next!=NULL){
          printf("%d",cur->value);
          cur=cur->next;
     }
     
}

void findfist3andlast3item(){
     cur=head;
     temp=head->next->next;
     printf("%d %d %d",cur->value,cur->next->value,temp->value);
     while(temp->next!=NULL){
          cur=cur->next;
          temp=temp->next;
     }
     printf("%d %d %d",cur->value,cur->next->value,temp->value);
}
void udelete(int ele){
     prev=head;
     cur=prev->next;
    int count=0;
    while(count!=ele){
        temp=prev;
        cur=cur->next;
        prev=prev->next;
        count++;
    }if(temp!=NULL)
    prev->next=temp->next;
    free(temp);
    
}
int main(){
    int ch,ele;
   
    while(1){
         printf("1.insetion");
         printf("2.print");
    printf("3.findfist3andlast3item");
    printf("4.delete");
       scanf("%d",&ch); 
       if(ch==1){
            scanf("%d",&ele);
            insertion(ele);
       }
       else if(ch==2){
            prrint();
       }
       else if(ch==3){
          findfist3andlast3item();
       }
       else if(ch==4){
          scanf("%d",&ele);
          udelete(ele);
       }
    }

}
