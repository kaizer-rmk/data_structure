//implementation of queue using array
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int f=-1;
int l=-1;
int a[5];
int n=5;
void enq(int v){
if(l<n-1){
    if(f==-1){
        f=0;
        l=0;
        a[l]=v;
    }
    else{
        l++;
        a[l]=v;
    }
}
else
    printf("Queue Overflow!!!!!");
}
void dq(){
if(f!=-1){
    if(f==l){
        f=l=-1;
    }
    else{
        printf("\nDeleted value is %d\n",a[f]);
        f++;
    }
}
else
    printf("Queue underflow!!!");

}
void display(){
    int i;
    for(i=f;i<=l;i++)
        printf("a[%d]:\t%d\n",i,a[i]);
}
void main()
{
    int v,op;
    while(1){
        printf("Press 0. For exit\n");
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
