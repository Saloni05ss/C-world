//size, limit, precision(digit after decimal point) of datatypes
# include<stdio.h>
# include<limits.h>
# include<float.h>
void main()
{
	//%u for print unsigned decimal integer
	//%d for decimal integer
	//%e for print decimal integer in exponential format
	printf("Size of char:%u \n",sizeof(char));
	printf("Size of int:%u \n",sizeof(int));
	printf("Size of short int:%u \n",sizeof(short));
	printf("Size of long int:%u \n",sizeof(long));
	printf("Size of float:%u \n",sizeof(float));
	printf("Size of double:%u \n",sizeof(double));
	printf("Size of long double:%u \n",sizeof(long double));
	
	printf("limit of signed char:%d\t%d\n",SCHAR_MIN,SCHAR_MAX);
	printf("limit of unsigned char:0\t%d\n",UCHAR_MAX);
	printf("limit of short int:%d\t%d\n",SHRT_MIN,SHRT_MAX);
	printf("limit of unsigned short int:0\t%d\n",USHRT_MAX);
	printf("limit of int:%d\t%d\n",INT_MIN,INT_MAX);
	printf("limit of unsigned int:0\t%d\n",UINT_MAX);
	printf("limit of long int:%d\t%d\n",LONG_MIN,LONG_MAX);
	printf("limit of unsigned long int:0\t%d\n",ULONG_MAX);
	printf("limit of float:%e\t%e\n",FLT_MIN,FLT_MAX);
printf("limit of double:%e\t%e\n",DBL_MIN,DBL_MAX);
printf("limit of long double:%e\t%e\n",LDBL_MIN,LDBL_MAX);
 
 printf("precision of float:%d\n",FLT_DIG);	
 printf("precision of double:%d\n",DBL_DIG);	
 printf("precision of long double:%d\n",LDBL_DIG);	
}
