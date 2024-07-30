//sum of digits of any number
#include<stdio.h>
main()
{
	int n,sum=0,rem=0;
	printf("enter the number");
	scanf("%d",&n);
	int num=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("sum of digits of %d is %d",num,sum);
}
