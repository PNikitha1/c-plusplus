#include <stdio.h>
#include <stdbool.h>

bool prime_number_or_not(int); 

int main() {
    int num;
    scanf("%d", &num);
    if(prime_number_or_not(num))
        printf("YES");
    else
        printf("NO");
    
    return 0;
}

bool prime_number_or_not(int number){
    if(number<=1)
        return false;
    for(int i=2;i<number;i++){
        if(number%i==0)
        return false;
    }
    
    return true;
}