#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    char *r;
    printf("Enter the string : ");
    scanf("%s",s);
    r = strrev(s);
    printf("Reverse string is : %s",r);
   return 0;
}
