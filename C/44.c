#include <stdio.h>

void linear(int arr[], int n, int s){
  int i, flag=0;
  for(i=0; i < n; i++){
      if (arr[i] == s){
        printf("\nElement found at %d index.\n", i);
        flag = 1;
        break;
      }
  }  
  if (flag == 0)printf("\nElement NOT found\n");
}

void binary(int arr[], int n, int s){
  int i, key, j, h=n-1, l=0, m, flag=0;
  for(i=0; i < n; i++){
    //printf("%d", arr[i]);
    key = arr[i];
    j = i-1;
    while(j >= 0 && arr[j] > key){
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = key;
  }
  printf("Sorted Array:");
  for(i=0; i < n; i++){
    printf("%d,", arr[i]);
  }
  h=n-1;
  l=0;
  while (l <= h) { 
        m = (l + h) / 2; 
  
        // Check if s is present at mid 
        if (arr[m] == s){
            printf("\nElement found at %d index.\n", m);
            flag = 1;
        }
        // If s greater, ignore left half 
        if (arr[m] < s) 
            l = m + 1; 
  
        // If s is smaller, ignore right half 
        else
            h = m - 1; 
    } 
  if (flag == 0)printf("\nElement NOT found\n");

}
void main(){
  int arr[100], i, n, op, flag=0, s;
  printf("1. Linear\n2. Binary\n3. Exit\n");
  while(1){
    if(flag == 1)break;
    printf("\nEnter the option:");
    scanf("%d", &op);
    if (op < 3 && op > 0){
      printf("Enter the number of elements:");
      scanf("%d", &n);
      printf("Enter the elements:\n");
      for(i=0; i < n; i++){
        scanf("%d", &arr[i]);
      }
      printf("Enter search element:");
      scanf("%d", &s);
    }
    switch(op){
      case 1: linear(arr, n, s);break;
      case 2: binary(arr, n, s);break;
      default:flag = 1;break;
    }
  }
}
