//check_a_number_is_armstrong_or_not
#include<stdio.h>
main()
{
	int n,rem,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	int org=n;
	while(n!=0)
	{
		rem=n%10;
		sum= sum + (rem*rem*rem);
		n=n/10;
	}
	if(org==sum)
	{
		printf("%d is a armstrong number",org);
	}
	else
	{
		printf("%d is not a armstrong number",org);
	}
}
