#include <stdio.h>
int p =1;
int fact(int n){
	if (n<=0){
		return 1;
	}else{
		//printf("%d|", (n * fact(n-1)));
		return n * fact(n-1);
	}
}
void main(){
	int n;
	printf("Enter the number:");
	scanf("%d", &n);
	printf("%d", fact(n));
}
