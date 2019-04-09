#include <stdio.h>

void rep(int n){
	int sum[100], i=0, k;
	while(n > 0){
				sum[i] = n%2;
				n = n/2;
				i++;
			}
	for (k=i-1; k >= 0; k--)
	printf("%d", sum[k]);
}


int bin(int n){
	if (n==0)
		return 0;
	else
		return (n % 2 + 10 * bin(n / 2)); 
}


void prime(int op){
	int arr[100], n, i, j, flag;
	printf("Enter the no of number:");
	scanf("%d", &n);
	for (i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	for (i=0; i<n; i++){
		flag = 1;
		//printf("Here\n");
		for (j=2; j<=arr[i]/2; j++){
			if (arr[i]%j == 0){
				flag=0;
				break;
			}
		}
		if (flag==1){
			if(op == 2)printf("Number: %d - Binary: %d", arr[i], bin(arr[i]));
			else{ 
				printf("Number: %d - Binary:", arr[i]);
				rep(arr[i]);
			}
		}
		printf("\n");
	}
}


void main(){
	int op, flag=0;
	printf("1. Iteration\n2. Recursive\n3. Exit\n");
	while(1){
		if (flag == 1)break;
		printf("\nEnter the option:");
		scanf("%d", &op);
		
		if (op >= 3){
			flag = 1; 
			break;
		}else{
			prime(op);
		}
	}
}
