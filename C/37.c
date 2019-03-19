#include <stdio.h>
#include <string.h>
void main(){
	struct lib{
		char name[10];
		char cl[10];
		int adm;
	}l[10];
	int n, adm, flag=0, op, e=0, j=0;
	char menu[100], temp[10], a[10], b[10];
	strcpy(menu, "1. Add student\n2. Display\n3. Alpha order\n4. Exit\n");
	printf("%s", menu);
	while(1){
		if (e == 1)break;
			printf("\nEnter the option");
			scanf("%d", &op);
			switch(op){
				case 1:
					printf("Enter the number of students:");
					scanf("%d", &n);
					for (int i = 0; i < n; ++i){
						printf("Enter the name:");
						scanf("%s", &l[j].name);
						printf("Enter the class:");
						scanf("%s", &l[j].cl);
						printf("Enter the admission number:");
						scanf("%d", &l[j].adm);
						j++;
					}
				break;
				case 2:

					printf("Details:");
					for (int i = 0; i < j; ++i){
							printf("\n\nName:");
							printf("%s", l[i].name);
							printf("\nClass :");
							printf("%s", l[i].cl);
							printf("\nAdmission number:");
							printf("%d", l[i].adm);
						
					}
					break;
				case 3:
					j--;
					for (int i = 0; i <= j; ++i){
						for (int k = i+1; k <= j; ++k){
							strcpy(a, l[i].name);
							strcpy(b, l[k].name);
							if(strcmp(a, b)>0){
								strcpy(temp, l[i].name);
								strcpy(l[i].name, l[k].name);
								strcpy(l[k].name, temp);
							}
						}


					}
					printf("Details:");
					for (int i = 0; i <= j; ++i){
							printf("\n%s", l[i].name);
						
					}
				break;
				default:
					e = 1; 
					break;
			}
	}
}
