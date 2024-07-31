//print_all_palindromic_number_between_range
#include<stdio.h>
main()
{
	int n,re,rem;
	printf("enter a number");
	scanf("%d",&n);
	int i;
	printf("palindromic number in between %d are\n",n);
	for(i=0; i<=n; i++)
	{
		re=0;
		int org=i;
		int num=i;
		while(num!=0)
     	{
	    	rem=num%10;
	    	re=(re*10)+rem;
	    	num=num/10;
    	}
    	if(re==org)
    	{
    		printf("%d\n",org);
		}
	}
	
}
