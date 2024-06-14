#include<stdio.h>

check(int num){
	
	if(num%2==0){
		
		printf("Number You can Enter is Even.");
	}else{
		
		printf("Number You can Enter is Odd.");
	}
}

main(){
	
	int num;
	
	printf("Enter Number To Check it Even Or Odd :- ");
	scanf("%d", &num);	
	
	check(num);
	
}