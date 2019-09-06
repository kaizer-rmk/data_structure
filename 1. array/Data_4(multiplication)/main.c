//multiplication of array
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[20][20],b[20][20],c[40][40];
    int i,j,k,m,n,p,q;
    printf("For First array:\n");
    printf("Enter the no. of rows:");
    scanf("%d",&m);
    printf("Enter the no. of cols:");
    scanf("%d",&n);
    printf("Enter the elements of array:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    printf("For second array:\n");
    printf("Enter the no. of rows:");
    scanf("%d",&p);
    printf("Enter the no. of cols:");
    scanf("%d",&q);
    printf("Enter the elements of array:\n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++)
            scanf("%d",&b[i][j]);
    }
    if(m!=p){
        printf("\nMultiplication is not possible....!!!!");
        exit(0);
    }
    printf("Result:\n");
for(i=0;i<m;i++){
  for(j=0;j<q;j++){
      c[i][j]=0;
     for(k=0;k<n;k++){
         c[i][j]+=a[i][k]*b[k][j];
       }
   printf("%d\t",c[i][j]);
   }
printf("\n");
}
getch();

}
