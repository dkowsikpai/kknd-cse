#include <stdio.h>
int sumd(int n, int sum){
	
	if(n<=0)return sum;
	else {
		sum += n%10;
		sumd(n/10, sum);
	}
}
void main(){
	int n;
	printf("Enter the number:");
	scanf("%d", &n);
	printf("%d", sumd(n, 0));
}
