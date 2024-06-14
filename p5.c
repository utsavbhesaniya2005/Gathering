#include<stdio.h>

int answer(int a, int b, int c){

	return ((b*b)*(4*a*c))/(2*a);
}

main(){
	
	int ans = answer(5,5,5);
	
	printf("\nAnswer Of These Question Is : %d\n", ans);
}
