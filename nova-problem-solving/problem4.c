#include <stdio.h>

int total_no_of_courses(int);

int main() {
    
	int no_of_languages;
	scanf("%d",&no_of_languages);
	int no_of_courses=total_no_of_courses(no_of_languages);
	printf("%d",no_of_courses);

}

int total_no_of_courses(int no_of_languages){
    return no_of_languages * 2;
}