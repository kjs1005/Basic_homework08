#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i,j,integer;
	
	printf("請輸入數字:\n");
	scanf("%d",&integer);
	printf("這個範圍的質數有:\n");
	
	for(i=2;i<=integer;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
				break;
		}
		if(i==j)
			printf("%5d",i);
	}
	
	system("pause");
	return 0;
}
