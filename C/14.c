#include<stdio.h>
void main()
{int n,a,r,d=0;
printf("Enter the number");
scanf("%d",&a);
n=a;
while(n>0)
{r=n%10;
 d=d+r;
 n=n/10
}

printf("the sum is %d",d);
}