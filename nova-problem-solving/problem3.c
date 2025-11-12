#include <stdio.h>

float calculate_BMI(float , float);

int main() {
    float height = 1.82;
    float weight = 72;
    float calculate=calculate_BMI(height,weight);
    printf("%f",calculate);
    
    return 0;
}

float calculate_BMI(float height,float weight){
    return weight / (height * height);
}
