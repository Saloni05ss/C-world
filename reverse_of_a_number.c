//reverse_of_a_number
#include<stdio.h>
main()
{
	int n,re=0,rem;
	printf("Enter a number");
	scanf("%d",&n);
	int num=n;
	while(n!=0)
	{
		rem=n%10;
		re=(re*10)+rem;
		//printf("%d\n",re);
		n=n/10;
	}
	printf("reverse of the  number %d is %d",num,re);
}
