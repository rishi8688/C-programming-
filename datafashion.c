#include<stdio.h>
int main()
{
	int you,date;
	printf("enter you rating of you and date\n");
	scanf("%d %d",&you,&date);
	if(you<=2||date<=2)
	{
		printf("0");
		}
		else if(you>=8||date)
		{
			printf("1");
		}
		return 0;
}

