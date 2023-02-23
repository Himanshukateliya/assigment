#include<stdio.h>
main()
{
	int years,days,RESULT_YEARS,RESULT_DAYS;
	
	printf("enter days:");
	scanf("%d",&days);
	
	RESULT_YEARS = days/365;
	
	printf("\n_________________________________\n");
	printf("%d days is eaquals to %d years",days,RESULT_YEARS);
	printf("\n__________________________________\n");
	
	printf("\n enter the years:");
	scanf("%d",&years);
	
	RESULT_DAYS = years*365;
	
	printf("\n__________________________________\n");
	printf("%d years is eaquals to %d days",years,RESULT_DAYS);
	printf("\n___________________________________\n");
	
}
