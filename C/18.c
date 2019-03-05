#include<stdio.h>
void main()
{int n,j,i;
printf("Enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
	{for(j=1;j<=n;j++)
		printf("%d*%d = %d",i,j,i*j);
	printf("\n");
	}
}