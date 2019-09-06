#include <stdio.h>
#include <stdlib.h>
int a[5];
int n=5;
int find(int k){
    int  l=0,h=n-1,mid;
    while(l<=h){
        mid=(l+h)/2;
        if(a[mid]==k)
            return 1;
        else if(a[mid]>k)
            h=mid-1;
        else
            l=mid+1;
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
