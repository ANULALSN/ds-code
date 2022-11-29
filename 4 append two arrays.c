#include<stdio.h>
int main()
{
	int a[10],b[10],c[20],a1,b1,i,j;
	printf("Enter the number of elements of array1:\n");
	scanf("%d",&a1);
	printf("Enter the elements:\n");
	for(i=0;i<a1;i++)
		scanf("%d",&a[i]);
	printf("Enter the number of elements of array2:\n");
	scanf("%d",&b1);
	printf("Enter the elements:\n");
	for(i=0;i<b1;i++)
		scanf("%d",&b[i]);
	//merging
	for(i=0;i<a1;i++)
		c[i]=a[i];
	for(j=0;j<b1;j++)
		c[i+j]=b[j];
	
	printf("Arrays aftert merging\n");
	for(i=0;i<a1+b1;i++)
		printf("%d",c[i]);
}
