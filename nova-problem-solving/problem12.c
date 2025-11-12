#include <stdio.h>

int reverse_a_number(int);

int main() {
    int number;
    scanf("%d",&number);
    int result=reverse_a_number(number);
    printf("%d",result);
}

int reverse_a_number(int number){
    int reversed_number=0;
    while(number!=0){
        reversed_number=10*reversed_number+(number%10);
        number=number/10;
    }
    
    return reversed_number;
}

