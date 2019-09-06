//structure using array
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define S 50
struct info{
int roll;
char name[50];
struct dob{
     int dd;
     int mm;
     int yyyy;
     } date;
char sex[2];
};
void main()
{
    struct info rmk[100];
    int n,i;
    printf("Enter the no. of person:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
            printf("P%d:",i+1);
            printf("Roll:");
            scanf("%d",&rmk[i].roll);
    printf("Name:");
    scanf("%s",rmk[i].name);
    printf("DOB:");
    printf(" Date:(dd)");
    scanf("%d",&rmk[i].date.dd);
    printf(" Month:(mm)");
    scanf("%d",&rmk[i].date.mm);
    printf(" Year:(yyyy)");
    scanf("%d",&rmk[i].date.yyyy);
   printf(" Sex:(M/F/G/L/T)");
    scanf("%s",rmk[i].sex);
    printf("\n");

    }
    printf(".................Result.................");
    for(i=0;i<n;i++){
        printf("\nP%d:",i);
        printf("Roll: %d",rmk[i].roll);
        printf("\nName: %s",rmk[i].name);
        printf("\nDate: %d/%d/%d",rmk[i].date.dd,rmk[i].date.mm,rmk[i].date.yyyy);
        printf("\nSex: %s",rmk[i].sex);
        printf("\n");
    }
    getch();
}
