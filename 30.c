#include <stdio.h>
void main(){
	int *a[20], n, pos, num, temp, i, j;
	printf("Enter the No of elements in array:");
	scanf("%d", &n);
	printf("Enter the elements to array:");
	for (i = 0; i < n; ++i)	{
		scanf("%d", a+i);
		//printf("%d\n", *(a+i));
	}
	printf("Enter the position:");
	scanf("%d", &pos);
	printf("Enter the number to add:");
	scanf("%d", &num);
	//temp = *(a+pos-1);
	//printf("%d\n", temp);
	for(i=n-1; i>=(pos-1); i--){
		*(a+i+1) = *(a+i);
	}
	*(a+pos-1) = num;
	for(i=0; i<=n; i++){
		printf("%d", *(a+i));
	}
	//temp = *(a+pos-1);
	//printf("%d\n", temp);
	for(i=0; i<=n; i++){
		for(j=0; j<n; j++){
			if(*(a+j)>*(a+j+1)){
				temp = *(a+j);
				*(a+j) = *(a+j+1);
				*(a+j+1) = temp;
			}
		}
	}
	printf("\n");
	for(i=0; i<=n; i++){
		printf("%d", *(a+i));
	}
}