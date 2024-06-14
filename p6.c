#include<stdio.h>

int ans(int a, int b, int c){

	return (a*a)+(2*a*b)+(b*b);
}

main(){
	
	int answer = ans(5,5,5);
	
	printf("\nAnswer Of Equation Is : %d\n", answer);
}
