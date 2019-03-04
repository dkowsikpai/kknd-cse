#include<stdio.h>
#include<string.h>
void main(){
	int i, l, j=0, w=0;
	char st[100], ch[20], temp[20][100], rep[20], st2[20][100];
	printf("Enter the string:");
	gets(st);
	printf("Enter the word:");
	gets(ch);
	printf("Enter the replace:");
	gets(rep);
	l = strlen(st);
	for(i=0; i<=l; i++){
		if(st[i]==' '||st[i]=='\0'){
			temp[w][j] = '\0';
			w++;
			j = 0;
		}else{
			temp[w][j] = st[i];
			j++;
		}
	}
	for(i=0; i<w; i++){
		//printf("%s\n", temp[i]);
		if(strcmp(temp[i], ch) == 0){
			//printf("here\n");
			strcpy(temp[i], rep);
		}	

	}
	for(i=0; i<w; i++){
		printf("%s ", temp[i]);

	}

}