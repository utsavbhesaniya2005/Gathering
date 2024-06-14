#include<stdio.h>

float area(int r){
	
	float pi = 3.14;
	float radius = pi*r*r;
	
	return radius;
}

main(){
	
	float circle = area(6);
	
	printf("\nArea Of Circle Is : %f\n", circle);
}
