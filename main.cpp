#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i,j,integer;
	
	printf("�п�J�Ʀr:\n");
	scanf("%d",&integer);
	printf("�o�ӽd�򪺽�Ʀ�:\n");
	
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
