#include <stdio.h>
#include <string.h>
void main(){
	struct lib{
		char name[10];
		char auth[10];
		int count;
		int acc;
	}l[10];
	int n, acc, flag=0, op, e=0, j=0;
	char menu[100], auth[10];
	strcpy(menu, "1. Add Books\n2. Find books\n3. Book Count\n4. Author books\n5. Exit\n");
	printf("%s", menu);
	while(1){
		if (e == 1)break;
			printf("\nEnter the option");
			scanf("%d", &op);
			switch(op){
				case 1:
					printf("Enter the number of books:");
					scanf("%d", &n);
					for (int i = 0; i < n; ++i){
						printf("Enter the name of book:");
						scanf("%s", &l[j].name);
						printf("Enter the author of book:");
						scanf("%s", &l[j].auth);
						printf("Enter the book accession number:");
						scanf("%d", &l[j].acc);
						printf("Enter the book count:");
						scanf("%d", &l[j].count);
						j++;
					}
				break;
				case 2:

					printf("Enter the accession number:");
					scanf("%d", &acc);
					flag = 0;
					for (int i = 0; i < j; ++i){
						if (acc == l[i].acc){
							printf("\nName of book:");
							printf("%s", l[i].name);
							printf("\nAuthor of book:");
							printf("%s", l[i].auth);
							printf("\nAccession number:");
							printf("%d", l[i].acc);
							printf("\nBook count:");
							printf("%d", l[i].count);
							flag = 1;
						}
					}
					if (flag == 0)printf("No Records found!!!");
					break;
				case 3:

					printf("Enter the accession number:");
					scanf("%d", &acc);
					flag = 0;
					for (int i = 0; i < j; ++i){
						if (acc == l[i].acc){
							printf("Book count:");
							printf("%d", l[i].count);
							flag = 1;
						}
					}
					if (flag == 0)printf("No Records found!!!");
					break;
				case 4:

					printf("Enter the author name:");
					scanf("%s", &auth);
					flag = 0;
					printf("\nBooks by %s:", auth);
					for (int i = 0; i < j; ++i){
						if(strcmp(auth, l[i].auth) == 0){
							printf("%s", l[i].name);
							flag = 1;
						}
					}if (flag == 0)printf("No Records found!!!");
					break;
				default:
					e = 1; 
					break;
			}
	}
}
