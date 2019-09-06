#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int a[5];
int n=5;
void bubble(){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
     int i;
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++){
        printf("a[%d] : ",i+1);
        scanf("%d",&a[i]);
    }
    bubble();
        for(i=0;i<n;i++){
        printf("\na[%d] : %d",i+1,a[i]);
    }
    return 0;
}
