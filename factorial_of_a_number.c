#include <stdio.h>

//int factorial(int);

int main(){
    int n;
    scanf("%d",&n);
    int result=1;
    for(int i=1;i<=n;i++)
    result=result*i;
    printf("%d\n",result);
}

// int factorial(int n){
//     if(n==0)
//         return 1;
//     else
//         return n*factorial(n-1);
// }