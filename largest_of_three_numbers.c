#include <stdio.h>

int largest_of_three_numbers(int , int , int);

int main() {

	int num1,num2,num3;
	scanf("%d%d%d",&num1,&num2,&num3);
	int result=largest_of_three_numbers(num1,num2,num3);
	printf("Largest: %d",result);

}

int largest_of_three_numbers(int num1, int num2, int num3){
    if(num1 >= num2 && num1 >= num3)
        return num1;
    else if(num2 >= num1 && num2 >= num3)
        return num2;
    return num3; 
}