#include<stdio.h>
void main(){
	int a[20], sum[20], i, n, s=0;
	printf("Enter n :");
	scanf("%d", &n);
	printf("Enter the matrix");
	for(i=0; i<n; i++){
			scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++){
			s = s + a[i];
			sum[i] = s;
	}
	for(i=0; i<n; i++){
			printf("%d, ", sum[i]);
	}
	
}
