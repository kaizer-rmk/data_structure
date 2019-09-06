#include <stdio.h>
#include <stdlib.h>
int a[5];
n=5;
void quick(int l,int h){
    int low,high,temp,key,i;
    low=l;
    high=h;
    key=a[(low+high)/2];
    while(low<=high){
            if(key>a[low]){
                low++;
            }
            if(key<a[high]){
                high--;
            }
            if(a[low]<=a[high]){
                temp=a[high];
                a[high]=a[low];
                a[low]=temp;
            }

    }
    if(l<high)
        quick(l,high);
    if(low<h)
        quick(low,h);

}
int main()
{
    int i,l,h;
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++){
        printf("a[%d] : ",i+1);
        scanf("%d",&a[i]);
    }
    l=0;
    h=n-1;
    quick(l,h);
        for(i=0;i<n;i++){
        printf("\na[%d] : %d",i+1,a[i]);
    }
    return 0;
}
