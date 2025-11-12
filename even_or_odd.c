#include <stdio.h>
#include <stdbool.h>

bool check_even(int);

int main() {
	// your code goes here
	int number;
	scanf("%d",&number);
	
	if(check_even(number)){
	    printf("Even");
	}
	else
	{
	    printf("Odd");
	}

}

bool check_even(int number){
    return number%2==0;
}