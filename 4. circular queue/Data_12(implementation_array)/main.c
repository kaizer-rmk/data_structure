////implementation of circular queue using array
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int a[5];
int f=-1;
int l=-1;
int n=5;
void enq(int v){
    if((f==0&&l==n-1)||(f==l+1)){
        printf("\nQueue is Full!!");
    }
    else{
        if(l==n-1)
            l=0;
        else{
            l++;
            a[l]=v;
            if(f==-1)
                f=0;
        }
    }
}
void dq(){
    if(f==-1)
        printf("\nQueue is empty!!!");
    else{
        printf("\n Deleted data is: %d",a[f]);
        if(f==l)
            f=l=-1;
        else if(f==n-1)
            f=0;
        else{
            f++;
        }
    }
}
void display(){
    int i;
  if (f==-1)
    {
        printf("\nQueue is Empty");
        return;
    }
    printf("\nElements in Circular Queue are: ");
    if (l>=f)
    {
        for(i=f;i<=l;i++)
            printf("\n%d",a[i]);
    }
    else
    {
        for (i=f;i<n;i++)
            printf("\n%d",a[i]);

        for (i=0;i<=l;i++)
            printf("\n%d",a[i]);
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
