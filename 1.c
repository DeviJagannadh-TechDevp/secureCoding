#include <stdio.h>
int main () {
    char user_name[10];
    int allow = 0;
    printf("Enter your username, please: ");
    gets(user_name); 
    if (grantAccess(user_name)) {
        allow = 1;
    }
    if (allow != 0) { 
	      printf("%s",user);
       // privilegedAction();
    }
    return 0;
}

int grantAccess(char *name)
{
char name1[]="vitap";
if(!strcmp(name1,name))
   return 1;
else
    return 0;
 } 

