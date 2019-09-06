#include <stdio.h>
#include<math.h>
#include <stdlib.h>
int a[5];
void shell(){
    int i,j,gap,temp;
    for(gap=5/2;gap>0;gap/=2){
        for(i=gap;i<5;i+=1){
            int temp=a[i];
            for(j=i;j>=gap&&a[j-gap]>temp;j-=gap)
                a[j]=a[j-gap];
            a[j]=temp;
        }
    }
    for(i=0;i<5;i++)
        printf("\na[%d] : %d",i+1,a[i]);
}
int main()
{
    int i;
    printf("Enter the elements of array: \n");
    for(i=0;i<5;i++){
        printf("a[%d] : ",i+1);
        scanf("%d",&a[i]);
    }
    shell();
    return 0;
}
