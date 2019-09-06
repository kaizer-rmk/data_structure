//insertion , deletion ,display in circular linked list
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct Node{
  int data;
  struct Node *next;
}*f=NULL,*l=NULL;
typedef struct Node node;
void create(){
    node *head=NULL;
}
void f_insert(int v){
    node *temp;
    node *nn=(node *)malloc(sizeof(node));
    if(f==NULL){
        nn->data=v;
        nn->next=nn;
        f=l=nn;
    }
    else{
        nn->data=v;
        nn->next=f;
        f=nn;
        l->next=nn;
    }
}
void l_insert(int v){
    node *temp;
    node *nn=(node *)malloc(sizeof(node));
    if(f==NULL){
        nn->data=v;
        nn->next=nn;
        f=l=nn;
    }
    else{
        nn->data=v;
        l->next=nn;
        l=nn;
        l->next=f;
    }
}
void k_insert(int k,int v){
    int c=1;
    node *temp;
    node *nn=(node *)malloc(sizeof(node));
    if(k==1){
        nn->data=v;
        nn->next=nn;
        f=l=nn;
    }
    else{
        nn->data=v;
        for(temp=f;temp->next!=f;temp=temp->next){
            c++;
            if(c==k)
                break;
        }
        if(k>(c+1))
            printf("Insertion is not possible!!!");
        else if(k==c+1){
            nn->next=f;
            temp->next=nn;
        }
        else{
            nn->next=temp->next;
            temp->next=nn;
        }
    }
}
void f_delete(){
    node *temp;
    if(f==NULL)
        printf("List is Empty!!!");
    else{
        temp=f;
        printf("Deleted item is %d",temp->data);
        f=f->next;
        l->next=f;
        free(temp);
    }
}
void l_delete(){
    node *temp,*list;
    if(f==NULL)
        printf("List is Empty!!!");
    else{
        for(temp=f;temp->next->next!=f;temp=temp->next);
        list=temp->next;
        l=temp;
        l->next=f;
        free(list);
    }
}
void k_delete(int k){
    node *temp,*list;
    int c=1;
    if(f==NULL)
        printf("List is Empty!!!!");
    else if(k==1){
        f_delete();
    }
    else{
        for(list=f;list->next->next!=f;list=list->next){
            c++;
            if(c==k)
                break;
            }
        if(k>(c+1))
            printf("\nDeletion is not Possible!!!");
        else if(k==c+1){
                l_delete();

        }
        else{
            temp=list->next;
                list->next=list->next->next;
                free(temp);
        }
    }
}
void main(){
int op,v,k,opp;
node *temp;
create();
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
		          for(temp=f;temp->next!=f;temp=temp->next)
			      printf("\n%d",temp->data);
			      printf("\n%d",temp->data);
		          break;
		   case 4:exit(0);
		          break;
	       default:printf("Wrong Choice!!!!!");
		           break;
	      }
       }
}
