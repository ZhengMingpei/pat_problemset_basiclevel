#include<stdio.h>

int main()
{
	int a,y;//a*x^y
	int sum = 0;
	while(scanf("%d %d",&a,&y)!=EOF)
	{
			if(y!=0)
			{
				if(sum!=0)
					printf(" ");
				printf("%d %d",a*y,y-1);
				sum++;
			}
	}
	if(sum==0) //当只有 a*x^0 时，导数为0，需要输出0 0而不是没有输出。 
		printf("0 0");
	return 0;
}
