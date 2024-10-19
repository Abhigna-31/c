#include<stdio.h>
int main()
{
	int m,e,s,c,h,percentage;
	float per,total;
	printf("enter the marks for subject:\n");
	scanf("%d%d%d%d%d",&m,&e,&s,&c,&h);
	total=(m+e+s+c+h);
	per=(total/500)*100;
	printf("total marks=%.2f\n",total);
	printf("marks percentage=%.2f\n",per);
	if (percentage>=90)
	{
		printf("\n grade A");
	}
	else if(percentage>=80)
	{
		printf("\n grade B");
	}
	else if(percentage>=70)
	{
		printf("\n grade C");
	}
	else if(percentage>=60)
	{
		printf("\n grade D");
	}
	else if(percentage>=40)
	{
		printf("\n grade E");
	}
	else
	{
		printf("\n Fail");
	}
	return 0;
}
