//multiplication table
#include<stdio.h>
main()
{
	int n,i=1;
	printf("Enter a number");
	scanf("%d",&n);
	printf("multiplication table of %d is\n",n);
	while(i<=10)
	{
		printf("%d * %d = %d\n",n,i,n*i);
		i++;
	}
}
