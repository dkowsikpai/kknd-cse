#include <stdio.h>
int prime(int n, int m){
	for (int i = n; i <= m; ++i){
		int flag = 1;
		for (int k=2; k<i/2; k++){
			if (i%k == 0){
				flag = 0;
				break;
			}
		}
		if (flag == 1)printf("%d,", i);
	}
	return 0;
}
void main(){
	int n, m;
	printf("Enter the range:");
	scanf("%d%d", &n, &m);
	prime(n, m);
}
