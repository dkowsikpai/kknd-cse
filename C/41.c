#include <stdio.h>
#include <stdlib.h>
void main(){
  char c;
  int count=0;
  FILE *fp;
  fp = fopen("temp.txt", "r");
  if (fp == NULL){
      perror("Error while opening the file.\n");
     exit(EXIT_FAILURE);
   }
 
   while((c = fgetc(fp)) != EOF)
      if (c == '\n'){
      count++;
      }
   fclose(fp);
   printf("Number of lines are %d", count+1);
}
