//creating, inserting, deleting, counting,merging,display using array
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define S 100
int a[S],n;
int b[S],t[S];
int l=-1;
void create(){
    int i;
   printf("Enter the no. of elements in an array:");
    scanf("%d",&n);
    printf("Enter the value of array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void ins(int p,int v){
 int i;
 if(p>n){
    printf("\ninsertion  overflow!!!\n");
 }
 else{
 for(i=n;i>=p;i--){
    a[i+1]=a[i];
 }
 a[p]=v;
 }
}
void del(int p){
int i;
if(p>=n||p<=l){
    printf("\nDeletion is not posible!!\n");
}
else{
   for(i=p;i<n;i++){
    a[i]=a[i+1];
   }
    n--;
}
}
void count(){
    int i;
    int e=0;
    for(i=0;i<n;i++)
        e++;
    printf("\nTotal no. of elements in array is: %d",e);
}
void merge(){
    int i,j,k,c,m;
    printf("\nEnter the no. of elements in 2nd array:");
    scanf("%d",&m);
    printf("\nEnter the elements of array:");
    for(j=0;j<m;j++){
        scanf("%d",&b[j]);
    }
    c=m+n;
    printf("\nTotal no. of array:%d",c);
    k=0;
    i=0;
    j=0;
    while(i<n){
        t[k]=a[i];
        k++;
        i++;
    }
    while(j<m){
        t[k]=b[j];
        k++;
        j++;
    }
    for(k=0;k<c;k++){
        printf("\narr[%d] : %d",k,t[k]);
    }
}
void search(){
    int v,i;
    printf("\nEnter the data to search:");
    scanf("%d",&v);
    for(i=0;i<n;i++){
        if(a[i]==v)
            break;
    }
    if(i<n)
        printf("Data found at %d : Data is: %d",i+1,a[i]);
    else
        printf("\nData not found!!!");
}
void sort(){
    int i,j,temp;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
            }
        }

}
void display(){
    int i;
    for(i=0;i<n;i++)
        printf("\na[%d]: %d",i,a[i]);

}
void main()
{
    int i,p,v,op;

    while(1){
        printf("\nPress 0. To exit");
        printf("\nPress 1. To create");
        printf("\nPress 2. To insert");
        printf("\nPress 3. To delete");
        printf("\nPress 4. To count");
        printf("\nPress 5. To search");
        printf("\nPress 6. To shorting");
        printf("\nPress 7. To display");
        printf("\nPress 8. To merge two array");
        printf("\nEnter your choice:");
        scanf("%d",&op);
        switch(op){
            case 0:exit(0);
                   break;
            case 1:create();
                   break;
            case 2:printf("Enter the position you want to insert:");
                   scanf("%d",&p);
                   printf("Enter the value of element:");
                   scanf("%d",&v);
                   p--;
                   ins(p,v);
                   n++;
                   break;
             case 3:printf("Enter the place you want to delete:");
                    scanf("%d",&p);
                    p--;
                    del(p);
                    break;
             case 4:count();
                    break;
             case 5:search();
                    break;
             case 6:sort();
                    break;
             case 7:display();
                    break;
             case 8:merge();
                    break;
             default:printf("\nWrong choice!!!");
                     break;
        }
    }

    getch();
}
