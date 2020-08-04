#include<stdio.h>
int main()
{
	int a[10],i,lb,ub,mid,key,n,flag=0;
	printf("\n enter size:");
	scanf("%d",&n);
	printf("\n enter elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter key to be searched for:");
	scanf("%d",&key);
	lb=0;
	ub=n-1;
	mid=(lb+ub)/2;
	while(lb<=ub)
	{
	
		if(a[mid]==key)
		{
			printf("\n search successful.");
			flag++;
			break;
		}
		else
		{
				if(a[mid]>key)
				{
					ub=mid-1;
					mid=(lb+ub)/2;
				}
				else{
					lb=mid+1;
					mid=(lb+ub)/2;
				}
		}
	}
	if(flag==0)
		printf("\n search unsuccessful.");
}
