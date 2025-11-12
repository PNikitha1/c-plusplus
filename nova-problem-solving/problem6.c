#include <stdio.h>
#include <stdbool.h>

bool oneful_pairs(int , int);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    bool pair=oneful_pairs(a,b);
    if(pair)
    printf("YES");
    else
    printf("NO");

}

bool oneful_pairs(int a , int b){
    return (a + b + (a * b)) == 111;
}