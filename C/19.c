#include<stdio.h>
#include<math.h>
int fact(int a)
{int m,i;
for(i=1;i<=a;i++)
	m=m*1;
return m;
}

void main()
{int n,x,i,a=0;
printf("Enter the limiting no of taylor series ");
scanf("%d",&n);
printf("Enter the value of x");
scanf("%d",&x);

for(i=1;i<=n;i++)
	a=a+((pow(x,(2*i-1))*pow(-1,i+1))/fact(2*i-1))
printf("the aprrox of sinx is %d",a);
}