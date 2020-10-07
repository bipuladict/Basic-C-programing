#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("enter the number you want to check for prime:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i == 0)
		count++;
	}
	if(count==2)
	printf("***PRIME NUMBER IS FOUND *****\n");
	else
	printf("XXXX   NOT PRIME  XXXXX");
	
	return 0;

}
/*enter the number you want to check for prime:
19
***PRIME NUMBER IS FOUND ***** 


enter the number you want to check for prime:
6
XXXX   NOT PRIME  XXXXX

*\





