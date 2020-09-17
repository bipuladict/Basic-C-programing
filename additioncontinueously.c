#include<stdio.h>
int main()

{
	int i,n,sum=0;
	printf("ENTER THE NUMBER UPTO YOU WANT ADD SIMULTANIOUSLY ---->\n");
	scanf("%d",&n);
	printf("********THE ADDITION IS*********\n");
	for(i=1;i<=n;i++)
	{
		sum = sum + i;		
		printf("%d  ",i);
		if(i < n)
		printf(" + ");
		
		else
		printf(" =  %d ",sum);
		
	
	
	
	
	}


	return 0;


/*
********** OUTPUT***********



      ENTER THE NUMBER UPTO YOU WANT ADD SIMULTANIOUSLY ---->
10
********THE ADDITION IS*********
1   + 2   + 3   + 4   + 5   + 6   + 7   + 8   + 9   + 10   =  55




*\


}
