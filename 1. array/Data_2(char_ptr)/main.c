//character using pointer
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
void main()
{
    char *msg;
    msg=(char*)malloc(30*sizeof(char));
    strcpy(msg,"Mukesh RMK pvt. ltd.");
    printf("The message now is %s\n",msg);
    msg=(char*)realloc(msg,60);
    strcpy(msg,"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
    printf("This message is now %s",msg);
    free(msg);
    getch();
}
