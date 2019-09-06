//implementation of queue using linked list
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct Node{
    int info;
    struct queue *next;
};
typedef struct Node node;
node *f=NULL;
node *l=NULL;
void enq(int x){
    node *nn;
    nn=(node*)malloc(sizeof(node));
    if(f==NULL){
        nn->info=x;
        nn->next=NULL;
        f=nn;
        l=nn;
    }
    else{
        nn->info=x;
        nn->next=NULL;
        l->next=nn;
        l=nn;
    }

}
void dq(){
    node *temp;
    if(f==NULL)
        printf("\nQueue is empty!!!\n");
    else{
        if(f==l){
            f=NULL;
            l=NULL;
        }
        else{
            temp=f;
            f=f->next;
        }
        printf("No. deleted is %d\n",temp->info);
    }
}
void display(){
    node *temp;
    if(f==NULL)
        printf("Queue is Empty!!!");
    else{
        for(temp=f;temp!=NULL;temp=temp->next)
            printf("\n%d",temp->info);
    }
}
void main()
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
