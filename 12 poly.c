#include <stdio.h>
#include<math.h>
struct poly{
	int coeff;
	int expo;
};
struct poly a[50],b[50],c[50],d[50];
int main(){
	int i;
	int l=0,m=0,k=0;
	int deg1,deg2;
	printf("Enter the highest degree of polynomial 1:\n");
	scanf("%d",&deg1);
	for(i=0;i<=deg1;i++)
	{
		printf("Enter the coefficient of x^%d",i);
		scanf("%d",&a[i].coeff);
		a[k++].expo=i;
	}
	printf("Enter the highest degree of polynomial 2:\n");
	scanf("%d",&deg2);
	for(i=0;i<=deg2;i++)
	{
		printf("Enter the coefficient of x^%d",i);
		scanf("%d",&b[i].coeff);
		b[l++].expo=i;
	}
	printf("\nExpression 1= %d",a[0].coeff);
	for(i=1;i<=deg1;i++)
	{
		printf("+%dx^%d",a[i].coeff ,a[i].expo);
		
	}
	printf("Expression 2= %d",b[0].coeff);
	for(i=1;i<=deg2;i++)
	{
		printf("+%dx^%d",b[i].coeff,b[i].expo);
	}
	if(deg1<deg2)
	{
		
		for(i=0;i<=deg2;i++) {
			c[m].coeff=a[i].coeff+b[i].coeff;
			c[m].expo=a[i].expo;
				m++;
		}
		for(i=deg2+1;i<=deg1;i++)
		{
			c[m].coeff=a[i].coeff;
			c[m].expo=a[i].expo;
			m++;
		}
	}
	else
		{
			for(i=0;i<=deg1;i++)
			{
			c[m].coeff=a[i].coeff+b[i].coeff;
			c[m].expo=a[i].expo;
			m++;
		    }
			for(i=deg1+1;i<=deg2;i++)
			{
				c[m].coeff=b[i].coeff;
				c[m].expo=b[i].expo;
				m++;
			}
			
	}
		printf("Expression after addition=%d",c[0].coeff);
		for(i=1;i<m;i++)
		{
			printf("+%dx^%d",c[i].coeff,c[i].expo);
		}
		
}

