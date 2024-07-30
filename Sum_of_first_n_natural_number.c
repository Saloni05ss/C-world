//sum of first n natural number
#include<stdio.h>
main()
{
	int n,i=1,sum=0;
	printf("enter the number upto which you wants to find sum ");
	scanf("%d",&n);
	while(i<=n){
		sum=sum+i;
		i++;
	}
	printf("sum is %d",sum);
}
