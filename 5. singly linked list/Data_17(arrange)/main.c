//For Arranging and reversing in singly Linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node *next;
}*head=NULL;
typedef struct Node node;
void create(int v){
 node *nn;
 node *temp;
 nn=(node *)malloc(sizeof(node));
 if(head==NULL){
    nn->data=v;
    nn->next=NULL;
    head=nn;
    }
 else{
      nn->data=v;
      nn->next=NULL;
      for(temp=head;temp->next!=NULL;temp=temp->next);
      temp->next=nn;
     }

}
void arrange(){
 node *temp;
 int list;
 for(temp=head;temp->next!=NULL;temp=temp->next){
   if(temp->data>temp->next->data){
     list=temp->data;
     temp->data=temp->next->data;
     temp->next->data=list;
   }
 }
 printf("\nAfter arranging:");
 for(temp=head;temp!=NULL;temp=temp->next){
  printf("\n%d",temp->data);
 }
}
void rev(){
 node *temp;
 node *list;
 int help;
 for(temp=head;temp->next!=NULL;temp=temp->next)
    for(list=temp->next;list!=NULL;list=list->next){
	help=temp->data;
	temp->data=list->data;
	list->data=help;
       }
  printf("\nAfter reversing:");
 for(temp=head;temp!=NULL;temp=temp->next){
  printf("\n%d",temp->data);
   }
}
void main(){
int op,v;
node *temp;
printf("Press 1. to Enter data:");
scanf("%d",&op);
while(op==1){
printf("\nEnter the value :");
scanf("%d",&v);
create(v);
printf("\nPress 1. to Enter data:");
scanf("%d",&op);
}
printf("\nElements of linked list is :");
 for(temp=head;temp!=NULL;temp=temp->next)
    printf("\n%d",temp->data);
 arrange();
 rev();
 getch();
}
