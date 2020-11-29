#include<stdio.h>
main()
{
	int n;
	printf("enter the marks\n");
	scanf("%d",&n);
	if( n>=85) 
	{
		printf("the garde is A ");
	}
	else if(n>=70)
	{
		printf("the grade is B");
	}
	else if(n>=55)
	{
		printf("the grade is C");
	}
	else if(n>=40)
	{
		printf("the grade is D");
    }
    else
    {
    	printf("the grade is FAIL");
	}
	return 0;
}
