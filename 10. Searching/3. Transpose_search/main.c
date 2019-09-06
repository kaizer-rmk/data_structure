#include <stdio.h>
#include <stdlib.h>
int a[5];
int n=5;
int find(int k){
    int i,temp;
    if(a[0]==k){
        return 1;
    }
    for(i=1;i<n;i++){
        if(a[i]==k){
            temp=a[i];
            a[i]=a[i-1];
            a[i-1]=temp;
            return 1;
        }
    }
    return 0;
}
int main()
{
    int i,k,r;
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++){
        printf("a[%d] : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the no. you want to search:");
    scanf("%d",&k);
    r=find(k);
    if(r!=0)
        printf("The entered value is found");
    else
        printf("The entered value is not found!!!");
    return 0;
}
