//print_all_armstrong_number_between_range
#include<stdio.h>
main()
{
	int n,sum,rem;
	printf("enter a number");
	scanf("%d",&n);
	int i;
	printf("armstrong number in between %d are\n",n);
	for(i=0; i<=n; i++)
	{
		sum=0;
		int org=i;
		int num=i;
		while(num!=0)
     	{
	        rem=num%10;
		    sum= sum + (rem*rem*rem);
	    	num=num/10;
    	}
    	if(sum==org)
    	{
    		printf("%d\n",org);
		}
	}
	
}
