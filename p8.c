#include<stdio.h>

float celsius(int c){

	return (c*1.8)+32;
}

main(){
	
	float fahrenheit  = celsius(4);
	
	printf("\nConverted Celsius into Fahrenheit Is :- %.1f\n", fahrenheit);
}
