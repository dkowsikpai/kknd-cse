#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void enc(){
  FILE *fp;
  FILE *fpr;

  char c;
  int key=0, cypher;
  fp = fopen("temp.txt", "r");
  fpr = fopen("enc.txt", "w+");
  if (fp == NULL){
    perror("Error while opening the file.\n");
    exit(EXIT_FAILURE);
  }
  while((c = fgetc(fp)) != EOF){
      key = c;
      //printf("%c\n", c);

      cypher = key + 4;
      c = cypher;
      fputc(c, fpr);
  }
  //rewind(fpr);
  //fprintf(stdout, "%s\n", fpr);
  fclose(fp);
  fclose(fpr);
  fpr = fopen("enc.txt", "r");
  printf("Encrypted key:");
  while((c = fgetc(fp)) != EOF)printf("%c", c);
  fclose(fpr);
}

void dec(){
  char c;
  int key=0, cypher;
  FILE *fpr;
  fpr = fopen("enc.txt", "r");
  printf("Decrpted key:");
  while((c = fgetc(fpr)) != EOF){
      key = c;
      cypher = key - 4;
      c = cypher;
      printf("%c", c);
  }
  fclose(fpr);
}

void main(){
  int flag=0, op;
  printf("1. Encrypt\n2. Decrypt\n3. Exit");
  while(1){
    if (flag == 1)break;
    printf("\nEnter the option:");
    scanf("%d", &op);
    switch(op){
      case 1: enc();break;
      case 2: dec();break;
      default :
        flag = 1;
        break;
    }
  }
}
