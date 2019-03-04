#include<stdio.h>
#include<string.h>
void main(){
    int i, l, j=0, c=0;
    char st[100], ch[20], temp[20];
    printf("Enter the string:");
    gets(st);
    printf("Enter the word:");
    gets(ch);
    l = strlen(st);
    for(i=0; i <= l; i++){
        if(st[i]==' '||st[i]=='\0'){
			temp[j] = '\0';
            //printf("%s", temp);
			if(strcmp(temp, ch) == 0){
				c++;
			}	
            j = 0;
        }else{
            temp[j] = st[i];
            j++;

        }
    }
	printf("%d", c);
}
