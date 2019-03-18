#include <stdio.h>
int p =1;
int fibo(int n){
	if (n<=1){
		return n;
	}else{
		//printf("%d|", (fibo(n-1) + fibo(n-2)));
		return (fibo(n-1) + fibo(n-2));
	}
}
void main(){
	int n;
	printf("Enter the number:");
	scanf("%d", &n);
	for(int i = 0; i<n; i++) {
      printf("%d ",fibo(i));            
   }
}
//0,1,1,2,3