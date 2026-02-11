#include<stdio.h>
int main()
{
	int small,big,goal;
	printf("enter the number of small bricks:\n");
	scanf(" %d",&small);
	printf("enter the number of large bricks:\n")
	scanf("%d,&large");
	printf("enter the goal in inches:");
	int req=goals/5;
	if(req<=big)
	{
		int rem=goal-req*5;
		if(rem<=small)
		{
			printf("true");
		}
		else
		{
			printf("false");
		}
		return 0;
	}
	
}
