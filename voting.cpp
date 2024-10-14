#include<stdio.h>
int main()
{
	int i,j,p,q,z;
	p=0;
	q=0;
	printf("enter number of votes");
	scanf("%d",&z);
	printf("enter your age");
	scanf("%d",&i);
	while(z>0)
	{
	if(i>=18)               
    {
	printf("president candidate:-\n1.joe\n2.kai");
	printf("\nEnter s.no to vote");
	scanf("%d",&j);
    }
	if(j==1)
	{
		p++;
	}
	else if(j==2)
	{
		q++;
	}
	else
	printf("invalid vote");
	z--;
}
	if(z==0&&p>q)
	printf("joe wins");
	else if("q>p")
	printf("kai wins");
	else
	printf("Draw");
	return 0;
}
