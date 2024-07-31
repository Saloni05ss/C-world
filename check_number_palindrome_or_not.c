//check_number_palindrome_or_not
#include<stdio.h>
main()
{
	int n,re,rem=0;
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
	if(num==re)
	{
		printf("%d is a palindromic number",num);
	}
	else
	{
		printf("%d is not a palindromic number",num);
	}
}
