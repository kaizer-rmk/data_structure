//implementation stack using linked list
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct Node{
    int info;
    struct Node *next;
};
struct Node *tos=NULL;
typedef struct Node node;
void push(int v){
    node *nn;
    nn=(node*)malloc(sizeof(node));
    nn->info=v;
    nn->next=tos;
    tos=nn;
}
void pop(){
    node *temp;
    if(tos==NULL)
        printf("Stack underflow!!!!\n");
    else{
       temp=tos;
       tos=tos->next;
       free(temp);
    }
}
void display(){
    node *i;
    if(tos==NULL)
        printf("Stack is Empty!!");
    else{
        printf("Stack is:\n");
        for(i=tos;i!=NULL;i=i->next){
            printf("%d\n",i->info);
    }    }
}
int main()
{
    int v,op;
  while(1){
    printf("\nPress 0. For EXIT");
    printf("\nPress 1. For PUSH");
    printf("\nPress 2. For POP");
    printf("\nPress 3. For Display");
    printf("\nEnter Your choice:");
    scanf("%d",&op);
    switch(op){
    case 0:exit(0);
           break;
    case 1:printf("Enter the value:");
           scanf("%d",&v);
           push(v);

           break;
    case 2:pop();
           display();
           break;
    case 3:display();
           break;
    default:printf("Wrong input!!!!!.....");
            break;
    }
  }
}

