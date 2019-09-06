//to concatinate two linked list
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*head1=NULL,*head2=NULL,*list;
typedef struct Node node;
node *temp;
void create1(int v){
    node *nn=(node *)malloc(sizeof(node));
    if(head1==NULL){
        nn->data=v;
        nn->next=NULL;
        head1=nn;
    }
    else{
        nn->data=v;
        for(temp=head1;temp->next!=NULL;temp=temp->next);
        nn->next=temp->next;
        temp->next=nn;
    }
}
void create2(int v){
    node *nn=(node *)malloc(sizeof(node));
    if(head2==NULL){
        nn->data=v;
        nn->next=NULL;
        head2=nn;
    }
    else{
        nn->data=v;
        for(temp=head2;temp->next!=NULL;temp=temp->next);
        nn->next=temp->next;
        temp->next=nn;
    }
}
concat(){
    for(list=head1;list->next!=NULL;list=list->next);
    list->next=head2;
    printf("\nAfter concat:");
    for(list=head1;list!=NULL;list=list->next)
        printf("\n%d",list->data);
}

int main()
{
    int op,op1,op2,v1,v2,v,r;
    node *temp;
    printf("For List_1:");
    printf("\nPress 1 to Enter data:");
    scanf("%d",&op1);
    while(op1==1){
        printf("Enter your data:");
        scanf("%d",&v1);
        create1(v1);
        printf("\nPress 1 to Enter data:");
        scanf("%d",&op1);
    }
    for(temp=head1;temp!=NULL;temp=temp->next){
        printf("%d\n",temp->data);
    }
    printf("For List_2:");
    printf("\nPress 1 to Enter data:");
    scanf("%d",&op2);
    while(op2==1){
        printf("Enter your data:");
        scanf("%d",&v2);
        create2(v2);
        printf("\nPress 1 to Enter data:");
        scanf("%d",&op2);
    }
    for(temp=head2;temp!=NULL;temp=temp->next){
        printf("%d\n",temp->data);
    }
    concat();

    getch();
}
