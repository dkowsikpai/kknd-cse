#include<stdio.h>
#include<math.h>

void main(){
 long int i, k=1, j,p, fa=1,m;
 double sine=0, x,t;
 printf("Enter x:");
 scanf("%ld", &m);
 x=m*3.14159/180;
    t=x;
    sine=x;
     
    /* Loop to calculate the value of Sine */
    for(i=1;i<=12;i++)
    {
        t=(t*(-1)*x*x)/(2*i*(2*i+1));
        sine=sine+t;
    }
 printf("%lf", sine);
}
