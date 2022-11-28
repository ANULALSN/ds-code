#include<stdio.h>
#include<string.h>
int main()
{
    int len,i;
    char *s;
    printf("Enter the string:\n");
    gets(s);
    len=strlen(s);
    printf("The reverse pf the string is:\n");
    for(i=len;i>=0;i--)
    scanf("%c",*(s+i));
    
}
