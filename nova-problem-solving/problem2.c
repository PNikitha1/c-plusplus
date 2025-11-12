#include <stdio.h>

float convert_to_celsius(float);

int main() {
    
    float fahrenheit = 98.3;
    float celsius=convert_to_celsius(fahrenheit);
    printf("%f",celsius);
    
    return 0;
}

float convert_to_celsius(float fahrenheit){

    return (fahrenheit - 32) * 5/9;

}
