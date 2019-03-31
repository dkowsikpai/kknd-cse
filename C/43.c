#include <stdio.h>

void bubble(int arr[], int n){
  int i, key, j;
  for(i=0; i < n; i++){
      for(j=i+1; j < n; j++){
        if(arr[i] > arr[j]){
          key = arr[j];
          arr[j] = arr[i];
          arr[i] = key;
        }
      }
    }  
  for(i=0; i < n; i++){
    printf("%d,", arr[i]);
  }
}

void insert(int arr[], int n){
  int i, key, j;
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
  for(i=0; i < n; i++){
    printf("%d,", arr[i]);
  }

}

void main(){
  int arr[100], i, n, op, flag=0;
  printf("1. Bubble\n2. Insertion\n3. Exit\n");
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
    }
    switch(op){
      case 1: bubble(arr, n);break;
      case 2: insert(arr, n);break;
      default:flag = 1;break;
    }
  }
}
