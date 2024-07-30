//factorial_of_a_number
#include<stdio.h>
main()
{
	int n,fact=1;
	printf("Enter a number");
	scanf("%d",&n);
	int num=n;
	if(n<0)
	    printf("Factorial of negative number does not exist");
    else if(n==0)
        printf("Factorial of 0 is 1");
    else
    {
    	while(n>0)
    	{
    		fact=fact*n;
    		n--;
		}
		printf("Factorial of %d is %d",num,fact);
	}
}
