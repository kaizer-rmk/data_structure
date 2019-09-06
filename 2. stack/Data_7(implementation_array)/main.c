//implementation of stack using array
#include <stdio.h>
#include <conio.h>
int tos=-1;
int a[5];
int n=5;
void push(int v){
if(tos>=n-1){
    printf("Stack overflow!!!");
}
else{
    tos++;
    a[tos]=v;
}
}
void pop(){
if(tos<=-1){
    printf("Stack underflow!!!");
}
else{
    tos--;
}
}
void display(){
    int i;
    for(i=0;i<=tos;i++){
        printf("\na[%d]:\t%d",i,a[i]);
    }
}

void main()
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
           display();
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
