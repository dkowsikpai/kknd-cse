#include<stdio.h>
void main()
{int n,a[10],osum=0,esum=0,i;
printf("Enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
for(i=1;i<=n;i++)
{if(a[i]%2==0)
	esum++;
else
	osum++;
}
printf("odd count :%d ,even count:%d",osum,esum);
}