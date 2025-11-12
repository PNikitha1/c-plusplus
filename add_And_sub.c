#include <stdio.h>

int add(int* , int*);
int sub(int* , int*);
int main(){
    int a,b;
    scanf("%d%d",&a,&b);

    int addition= add(&a,&b);
    int subtraction =sub(&a,&b);
    printf("%d",addition);
    printf("%d",subtraction);
}

int add(int* a, int* b){
    return *a + *b;
}

int sub(int* a, int* b){
    return *a - *b;
}