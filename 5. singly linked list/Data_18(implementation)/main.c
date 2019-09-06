//Insertion,Deletion,Display using Singly Linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node *next;
}*head=NULL;
typedef struct Node node;
void create(){
    node *head=NULL;
}
void f_insert(int v){
    node *nn;
    nn=(node *)malloc(sizeof(node));
    if(head==NULL){
        nn->data=v;
        nn->next=NULL;
        head=nn;
    }
    else{
        nn->data=v;
        nn->next=head;
        head=nn;
    }
}
void l_insert(int v){
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
void k_insert(int k,int v){
    int c=1;
    node *temp,*nn;
    nn=(node *)malloc(sizeof(node));
    if(k==1){
        f_insert(v);
    }
    else{
    nn->data=v;
    for(temp=head;temp->next!=NULL;temp=temp->next){
        c++;
        if(k==c)
            break;
    }
if(k>(c+1))
  printf("Insertion is not possible!!");
else if(k==(c+1)){
l_insert(v);
}
else{
    nn->next=temp->next;
    temp->next=nn;
}
    }
}
void f_delete(){
    node *temp;
    if(head==NULL)
        printf("Empty List!!!!");
    else{
        temp=head;
        head=head->next;
        free(temp);
    }
}
void l_delete(){
    node *temp;
    node *list;
    if(head==NULL)
        printf("Empty List!!!!");
    else{
        for(temp=head;temp->next->next!=NULL;temp=temp->next);
        list=temp->next;
        temp->next=NULL;
        free(list);
    }
}
void k_delete(int k){
    int c=1;
    node *temp;
    node *list;
    if(head==NULL)
        printf("Empty List!!!!");
     else if(k==1){
        f_delete();
    }
    else{
        for(temp=head;temp->next!=NULL;temp=temp->next){
                c++;
            if(k==c)
               break;
        }
if(k>(c+1))
 printf("Deletion not possible!!");
else if(k==(c+1)){
l_delete();
}
else{
        list=temp->next;
        temp->next=list->next;
        free(list);
       }
    }
}
void main(){
int op,v,k,opp;
node *temp;
 while(1){
	printf("\nPress 0. To Create");
	printf("\nPress 1. To Insert");
	printf("\nPress 2. To Delete");
	printf("\nPress 3. To Display");
	printf("\nPress 4. To Exit");
	printf("\n\nEnter Your Option:");
	scanf("%d",&opp);
	switch(opp){
	       case 0:create();
		          break;
	       case 1:printf("\nEnter the data to insert:");
		          scanf("%d",&v);
		          printf("\nPress 1. To insert as First Node");
		          printf("\nPress 2. To insert as Last Node");
		          printf("\nPress 3. To insert as Kth Node");
		          printf("\n\nEnter Your choice:");
		          scanf("%d",&op);
		          if(op==1)
                    f_insert(v);
                  else if(op==2)
                    l_insert(v);
                  else if(op==3){
                    printf("\nEnter the position to Insert:");
                    scanf("%d",&k);
                    k_insert(k,v);
                  }
		          break;
	       case 2:printf("\nPress 1. To delete First Node");
                  printf("\nPress 2. To delete Last Node");
                  printf("\nPress 3. To delete Kth Node");
                  printf("\n\nEnter Your Choice:");
                  scanf("%d",&op);
                  if(op==1)
                     f_delete();
                  else if(op==2)
                     l_delete();
                  else if(op==3){
                     printf("\nEnter the position to Delete:");
                     scanf("%d",&k);
                     k_delete(k);
                    }
                  break;
	       case 3:printf("Elements in the Linked list are:");
		          for(temp=head;temp!=NULL;temp=temp->next)
			      printf("\n%d",temp->data);
		          break;
		   case 4:exit(0);
		          break;
	       default:printf("Wrong Choice!!!!!");
		           break;
	      }
       }
 getch();
}

