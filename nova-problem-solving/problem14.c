#include <stdio.h>
#include<stdbool.h>

bool good_turn_or_not(int , int );

int main() {
    int t;
    scanf("%d", &t);

    // Loop for each test case
    while (t--) {
        int x, y;

      
        scanf("%d %d", &x, &y);
        
        if(good_turn_or_not(x,y))
            printf("YES\n");
        else
            printf("NO\n");

        // Your code for each test case goes here 
    }
}

bool good_turn_or_not(int number1 ,int number2){
    return number1+number2>6;
}