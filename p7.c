#include<stdio.h>

float fahrenheit(float f){

	return (f-32)/1.8;
}

main(){
	
	float celsius  = fahrenheit(36);
	
	printf("\nConverted Fahrenheit into Celsius Is :- %.5f\n", celsius);
}
