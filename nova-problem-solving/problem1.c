#include <stdio.h>

float convert_to_fahrenheit(float);

int main() {
	
    float celsius=20.5;
    float fahrenheit = convert_to_fahrenheit(celsius);
    printf("%f",fahrenheit);

}

float convert_to_fahrenheit(float celsius){

    return (celsius * 9/5) + 32;

}
