#include <stdio.h>
#include <math.h>
void main(){
  float a[100], *p=&a[0], sum=0, mean=0, sd=0, sdm=0;
  int n, i;
  printf("Enter number of data:");
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%f", (p+i));
  }
  for(i=0; i<n; i++){
    sum += *(p+i);
  }
  mean = sum/n;
  for(i=0; i<n; i++){
    sdm += pow((*(p+i)-mean), 2);
  }
  sd = pow(sdm/n, 0.5);
  printf("Sum = %0.3f\nMean = %0.3f\nStandard Deviation = %0.3f", sum, mean, sd);
}
