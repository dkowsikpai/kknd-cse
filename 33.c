#include<stdio.h>
void main(){
	int a[20][20], b[20][20], i, j, n, m;
	printf("Enter n x m:");
	scanf("%d%d", &n, &m);
	printf("Enter the matrix");
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			b[j][i] = a[i][j];
		}
	}
	printf("\nTranspose is:");
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
}
