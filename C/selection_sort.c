//Selection sort program for sorting in acending order.
#include <stdio.h>

void man]in(){//Selection sort program for sorting in acending order.
#include <stdio.h>

void main(){
  int a[20], i, j, n, min_ind, temp;
  printf("Enter the total no in array:");
  scanf("%d", &n);
  printf("Enter the array:\n");
  for (i=0; i<n; i++){//input the array
	  scanf("%d" , &a[i]);
  }
	//sorting funtion -------------------------------
  for (i=0; i<n; i++){
    min_ind = i;
    for (j=i+1; j<n; j++){
      if (a[j] < a[min_ind])min_ind = j;
    }
    temp = a[min_ind];//swapping
    a[min_ind] = a[i];
    a[i] = temp;
  }
	//---------------------------------------------------
  for (i=0; i<n; i++){
    printf("%d",  a[i]);
  }
}
  
