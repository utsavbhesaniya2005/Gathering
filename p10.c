#include<stdio.h>

check(int a, int b){
	
	printf("\nBefore Swapping Value Of A :- %d", a);
	printf("\nBefore Swapping Value Of B :- %d", b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n\nAfter Swapping Value Of A :- %d", a);
	printf("\nAfter Swapping Value Of B :- %d", b);
}

main(){
	
	int num1,num2;
	
	printf("Enter Value of A :- ");
	scanf("%d", &num1);
	
	printf("Enter Value of B :- ");
	scanf("%d", &num2);
	
	check(num1,num2);
	
}