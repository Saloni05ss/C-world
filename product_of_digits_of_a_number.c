//product of digits of a number
#include<stdio.h>
main()
{
	int n,pr=1,rem=0;
	printf("Enter a number");
	scanf("%d",&n);
	int num=n;
	if(n==0)
	    printf("product of digit 0 is 0");
	else
	{
	    while(n>0)
        {
	    	rem=n%10;
	    	pr=pr*rem;
	    	n=n/10;
	   }
	   printf("product of digit %d is %d",num,pr);
	}
	
}
