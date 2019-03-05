#include<stdio.h>
void main()
{int n,p=0,i;
printf("Enter the number");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
	{if(n%i==0)
		{p=0;
		 break;
		}
	else
		p=1;
	}
if(p==0)
printf("the factorial is not prime");
else
printf("the factorial is  prime");
}