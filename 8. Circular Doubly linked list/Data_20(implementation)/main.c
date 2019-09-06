//Insertion,Deletion,Display using Circular Doubly Linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node{
    struct Node *prev;
  int data;
  struct Node *next;
}*head1=NULL,*head2=NULL;
typedef struct Node node;
void f_insert(int v){
    node *nn;
    nn=(node *)malloc(sizeof(node));
    if(head1==NULL){
        nn->prev=nn;
        nn->data=v;
        nn->next=nn;
        head1=nn;
        head2=nn;
    }
    else{
        nn->data=v;
        nn->prev=head2;
        nn->next=head1;
        head1->next->prev=nn;
        head1=nn;
        head2->next=nn;

    }
}
void l_insert(int v){
 node *nn;
 nn=(node *)malloc(sizeof(node));
 if(head1==NULL){
    nn->prev=nn;
    nn->data=v;
    nn->next=nn;
    head1=nn;
    head2=nn;
    }
 else{
      head2->next=nn;
      nn->prev=head2;
      nn->data=v;
      nn->next=head1;
      head2=nn;
      head1->prev=head2;
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
    for(temp=head1;temp->next!=NULL;temp=temp->next){
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
    nn->prev=temp;
    nn->next=temp->next;
    temp->next->prev=nn;
    temp->next=nn;
}
    }
}
void f_delete(){
    node *temp;
    if(head1==NULL)
        printf("Empty List!!!!");
    else{
        temp=head1;
        printf("\nDeleted item is :%d",temp->data);
        head1=head1->next;
        head1->prev=head2;
        head2->next=head1;
        free(temp);
    }
}
void l_delete(){
    node *temp;
    if(head1==NULL)
        printf("Empty List!!!!");
    else{
        temp=head2;
        printf("\nDeleted item is :%d",temp->data);
        head2=head2->prev;
        head2->next=head1;
        head1->prev=head2;
        free(temp);
    }
}
void k_delete(int k){
    int c=1;
    node *temp;
    node *list;
    if(head1==NULL)
        printf("Empty List!!!!");
     else if(k==1){
        f_delete();
    }
    else{
        for(temp=head1;temp->next->next!=NULL;temp=temp->next){
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
        temp->next=temp->next->next;
        temp->next->prev=temp->next;
        free(list);
       }
    }
}
void main(){
int op,v,k,opp;
node *temp;
 while(1){
	printf("\nPress 0. To Exit");
	printf("\nPress 1. To Insert");
	printf("\nPress 2. To Delete");
	printf("\nPress 3. To Display");
	printf("\n\nEnter Your Option:");
	scanf("%d",&opp);
	switch(opp){
	       case 0:exit(0);
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
		          for(temp=head1;temp->next!=head1;temp=temp->next)
			      printf("\n%d",temp->data);
			      printf("\n%d",temp->data);
		          break;
	       default:printf("Wrong Choice!!!!!");
		           break;
	      }
       }
 getch();
}

