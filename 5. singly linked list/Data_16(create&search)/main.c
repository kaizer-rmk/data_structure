//to create and search using singly linked list
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*head=NULL;
typedef struct Node node;
node *temp;
void create(int v){
    node *nn=(node *)malloc(sizeof(node));
    if(head==NULL){
        nn->data=v;
        nn->next=NULL;
        head=nn;
    }
    else{
        nn->data=v;
        for(temp=head;temp->next!=NULL;temp=temp->next);
        nn->next=temp->next;
        temp->next=nn;
    }
}
int search(int val){
    node *temp;
    int c=0;
    for(temp=head;temp!=NULL;temp=temp->next){
        if(temp->data==val)
            {
                printf("Data Found at node: %d",c+1);
            }
    c++;

    }
}
int main()
{
  int op,v,val;
    node *temp;
    printf("\nPress 1 to Enter data:");
    scanf("%d",&op);
    while(op==1){
        printf("Enter your data:");
        scanf("%d",&v);
        create(v);
        printf("\nPress 1 to Enter data:");
        scanf("%d",&op);
    }
    for(temp=head;temp!=NULL;temp=temp->next){
        printf("%d\n",temp->data);
    }
    printf("\nEnter the no you want to search:");
    scanf("%d",&val);
   search(val);
   getch();
}
