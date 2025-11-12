#include <stdio.h>

int calculate_no_of_customers_chef_can_serve(int , int);

int main() {
	
    int x , y;
    scanf("%d %d", &x , &y);
    int max_no_of_customers_chef_can_serve=calculate_no_of_customers_chef_can_serve(x,y);
    printf("%d",max_no_of_customers_chef_can_serve);
}

int calculate_no_of_customers_chef_can_serve(int x , int y){
    return x * y;
}