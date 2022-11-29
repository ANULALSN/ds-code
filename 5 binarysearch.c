#include<stdio.h>
int main()
{
	int a[20],i,j,mid,beg,end,n,item;
	printf("Enter number of elements of array:\n");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the item to be searched:\n");
	scanf("%d",&item);
	//binary search
	beg=0;
	end=n-1;
	mid=(beg+end)/2;
	while((beg<=end) && a[mid]!=item)
	{
		if(item<a[mid])
			end=mid-1;
		else
			beg=mid+1;
		    mid=(beg+end)/2;
	}
	if(a[mid]==item)
		printf("Item found at position %d",mid+1);
	else 
		printf("Item not found:");
	
}
