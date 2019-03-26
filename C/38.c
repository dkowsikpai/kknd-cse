#include<stdio.h>
void main(){
	int n=0, m=0, *ptr = &n, *ptr1 = &m;
	printf("Enter the 2 numbers");
	scanf("%d %d", ptr, ptr1);
	printf("%d + %d = %d", n, m, (*ptr+*ptr1));
}
