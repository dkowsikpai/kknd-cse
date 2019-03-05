#include<stdio.h>
void main(){
	int a[20][20], b[20][20], sum[20][20], i, j, n, m, k, s=0;
	printf("Enter n x m:");
	scanf("%d%d", &n, &m);
	printf("Enter the matrix A");
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter the matrix B");
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &b[i][j]);
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			for(k=0; k<m; k++){
				s += a[i][k]*b[k][j];
			}
			sum[i][j] = s;
			s = 0;
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}
	
}
