#include<stdio.h>

float area(float l,float h){
	
	return (l*h)/2;
}

main(){
	
	float triangle = area(9,3);
	
	printf("\nArea Of Triangle Is : %.1f\n", triangle);
}
