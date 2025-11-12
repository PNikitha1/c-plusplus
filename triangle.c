#include <stdio.h>
#include <stdbool.h>

bool equilateral_triangle(int , int , int);
bool isosceles_triangle(int , int , int);

int main() {
    int side1,side2,side3;
    
    scanf("%d%d%d",&side1,&side2,&side3);
    
    if(equilateral_triangle(side1,side2,side3))
        printf("Equilateral");
    else if(isosceles_triangle(side1,side2,side3))
        printf("Isosceles");
    else
        printf("Scalene");

    return 0;
}

bool equilateral_triangle(int side1, int side2, int side3){
    return (side1 == side2) && (side2 == side3);
}

bool isosceles_triangle(int side1, int side2, int side3){
    return (side1 == side2) || (side2 == side3) || (side3 == side1);
}