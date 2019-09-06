//implementation of circular queue using array
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
int f=-1;
int l=-1;
int a[5];
int n=5;
void enq(){
    int v;
    if(f==(l+1)%n){
        printf("\nQueue overflow!!!\n");
    }
    else{
            printf("\nEnter the value you want to enter:");
                   scanf("%d",&v);
        if(f==-1)
            f=l=0;
        else
            l=(l+1)%n;
        a[l]=v;
    }
}
void dq(){
    if(f==-1){
        printf("\nQueue Underflow!!!\n");
    }
    else{
            printf("\nDeleted item is:%d\n",a[f]);
        if(f==l)
            f=l=-1;
        else
            f=(f+1)%n;
    }
}
void display(){
    int i;
    if(f!=-1){
       for(i=f;i!=l;i=(i+1)%n)
          printf("\n%d",a[i]);
       printf("\n%d",a[i]);
    }

    else
        printf("Queue is Empty!!!");
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
            case 1:
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
