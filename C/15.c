#include<stdio.h>
void main()
{int n,a,r=0,d=0;
printf("Enter the number");
scanf("%d",&a);
n=a;
while(n>0)
{r=n%10;
 d=r+(d*10);
 n=n/10
}

printf("the reverse is %d",d);
}