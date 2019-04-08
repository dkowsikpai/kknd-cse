#include <stdio.h>
void iter(){
	int sum[100], n, rem, i, k;
	printf("Enter the number:");
	scanf("%d", &n);
	while(n > 0){
		sum[i] = n%2;
		n = n/2;
		i++;
	}
	n = 0;
	printf("Binary is: ");
	for (k=i-1; k >= 0; k--)
		printf("%d", sum[k]);
}


int bin(int n){
	if (n==0)
		return 0;
	else
		return (n % 2 + 10 * bin(n / 2)); 
}


void rec(){
	int n;
	printf("Enter the number:");
	scanf("%d", &n);
	printf("Binary is: %d", bin(n));
}

void main(){
	int op, flag=0;
	printf("1. Iteration\n2. Recursive\n3. Exit\n");
	while(1){
		if (flag == 1)break;
		printf("\nEnter the option:");
		scanf("%d", &op);
		switch(op){
			case 1: iter();break;
			case 2: rec(); break;
			default : flag = 1;break;
		}
	}
}
