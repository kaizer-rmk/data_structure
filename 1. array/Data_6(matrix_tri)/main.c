//upper or lower triangle using array
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
void main()
{
    int i,j,n,f1=1,f2=1;
    int a[20][20];
    printf("Enter the order of matrix:");
    scanf("%d",&n);
    printf("Enter the elements of matrix:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d\t",a[i][j]);
            printf("\n");
    }
    printf("\n");
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
          if(a[i][j]!=0)
                f1=0;
          if(a[j][i]!=0)
                    f2=0;
        }
    }
    if(f1)
        printf("upper triangle matrix....");
    else if(f2)
        printf("lower triangle matrix.....");
    else
        printf("general matrix....");

}
