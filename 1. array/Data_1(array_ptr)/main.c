//array using pointer
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define NULL 0
void main()
{
int *ptr;
int i,n,sum=0,j;
float avg;
printf("Enter the no. of elements:");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));

if(ptr==NULL){
    printf("Memory is not available!!!");
    getch();
    exit(0);
}
else{
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",ptr+i);
    for(i=0;i<n;i++){
        sum=sum+(*(ptr+i));

    }
    printf("Sum of  elements is: %d",sum);
    avg=(float)sum/n;
    printf("Average of elements is: %f",avg);
}
}
