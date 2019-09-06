//implementation of circular queue using linked list
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
typedef struct Node node;
node *f=NULL;
node *l=NULL;
void enq(int v){
    node *nn;
    nn=(node*)malloc(sizeof(node));
    if(f==NULL){
        nn->data=v;
        nn->next=nn;
        f=l=nn;
    }
    else{
        nn->data=v;
        nn->next=f;
        l->next=nn;
        l=nn;

    }
}
void dq(){
    node *temp;
    if(f==NULL)
        printf("\nQueue is empty!!!!");
    else{
        temp=f;
        f=f->next;
        printf("\nDeleted item is: %d",temp->data);
        l->next=f;
        free(temp);
    }
}
void display(){
    node *temp;
    if (f==NULL)
        printf("\nQueue is Empty!!!");

    else{
        for(temp=f;temp->next!=f;temp=temp->next)
            printf("\n%d",temp->data);
        printf("\n%d",temp->data);
    }

}
int main()
{
    int v,op;
    while(1){
        printf("\nPress 0. For exit\n");
        printf("Press 1. For enqueue\n");
        printf("Press 2. For dequeue\n");
        printf("Press 3. For display\n");
        printf("Enter your choice:");
        scanf("%d",&op);
        switch(op){
            case 0:exit(0);
                   break;
            case 1:printf("\nEnter the value you want to enter:");
                   scanf("%d",&v);
                   enq(v);
                   break;
            case 2:dq();
                   break;
            case 3:display();
                   break;
            default:printf("\nWrong choice!!!");
                    break;
        }
    }
 getch();
}
