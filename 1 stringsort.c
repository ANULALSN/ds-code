#include<stdio.h>
#include<string.h>
int main()
{   char str[25][25],temp[25];
   int i,j,n;
    printf("Enter the number of strings:\n");
    scanf("%d",&n);
    printf("Enter the number of strings:\n");
    for(i=0;i<n;i++)
    gets(str[i]);
    
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
    {
        if(strcmp(str[i],str[j])>0)
        {
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
        }
    }
    printf("/n The strings in sorted order is:\n");
    for(i=0;i<n;i++)
    puts(str[i]);
}
 