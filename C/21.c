#include <stdio.h>
int s = 0;
int sum(int n){
	if (n<=0){
		return s;
	}else{
		s = s + (n%10);
		sum(n/10);
	}
}
void main(){
	int n;
	printf("Enter the number:");
	scanf("%d", &n);
	printf("%d", sum(n));
}
