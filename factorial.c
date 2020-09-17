#include<stdio.h>
int main()

{
	int i,n,fact=1;
	printf("********ENTER THE NUMBER******\n");
	scanf("%d",&n);
	printf("*****************\n");
	printf("%d !  = ",n);
	for(i=n;i>=1;i--)
	{
		fact = fact * i;		
		printf(" %d  ",i);
		
		
		if(i>1)
		printf(" x ");
	
	
		
	
	}
printf(" = %d\n",fact);

	return 0;
}
/*
********ENTER THE NUMBER******
             5
*****************
5 !  =  5   x  4   x  3   x  2   x  1   = 120*\
