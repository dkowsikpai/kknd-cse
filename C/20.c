#include <stdio.h>
int add(){
float a, b, c;
	printf("Enter two numbers:");
	scanf("%f%f", &a, &b);
	printf("%0.2f + %0.2f = %0.2f", a, b, (a+b));
	return (0);
}
int sub(){
float a, b, c;
	printf("Enter two numbers:");
	scanf("%f%f", &a, &b);
	printf("%0.2f - %0.2f = %0.2f", a, b, (a-b));
	return (0);
}
int mul(){
float a, b, c;
	printf("Enter two numbers:");
	scanf("%f%f", &a, &b);
	printf("%0.2f * %0.2f = %0.2f", a, b, (a*b));
	return (0);
}
int div(){
float a, b, c;
	printf("Enter two numbers:");
	scanf("%f%f", &a, &b);
	printf("%0.2f / %0.2f = %0.2f", a, b, (a/b));
	return (0);
}
void main(){
	int o, f=0;
	printf("\n1. Add\n2. Substract\n3. Multiply\n4. Divide\n5. Exit\n");
	while (1){
		if(f == 1)break;
		printf("\nEnter the option:");
		scanf("%d", &o);
		switch(o){
			case 1:{
				add();	
			break;
			}case 2:{
				sub();	
			break;
			}case 3:{
				mul();	
			break;
			}case 4:{
				div();	
			break;
			}default:{
				f =1;
				break;
			}
		
		}
	}

}
