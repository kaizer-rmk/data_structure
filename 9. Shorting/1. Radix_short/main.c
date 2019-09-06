#include <stdio.h>
#include <stdlib.h>
int a[5];
void radix(int s){
    int l,i,j,rad_i=0,rad_j=0,div=1,temp;
    for(l=0;l<s;l++){
            div*=10;
            for(i=0;i<5-1;i++){
                for(j=i+1;j<5;j++){
                    rad_i=a[i]%div;
                    rad_j=a[j]%div;
                    if(rad_i>rad_j){
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
            }
    }
    for(i=0;i<5;i++){
        printf("\na[%d] : %d",i+1,a[i]);
    }
}
int main()
{
    int i,large,s=0;
    printf("Enter the elements in array:\n");
    for(i=0;i<5;i++){
        printf("a[%d]: ",i+1);
        scanf("%d",&a[i]);
    }
    large=a[0];
    for(i=1;i<5;i++){
        if(a[i]>large)
            large=a[i];
    }
    while(large>0){
        s++;
        large=large/10;
    }
    printf("Max length of no. is : %d",s);
    radix(s);
    return 0;
}
