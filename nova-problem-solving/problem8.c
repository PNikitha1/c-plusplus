#include <stdio.h>
#include <string.h>


int lengthOfLastWord(char* s) {
    int length_of_string = strlen(s) - 1;
    int length_of_last_word = 0;
    while(length_of_string >= 0 && s[length_of_string] == ' '){
        length_of_string--;
    }
    while(length_of_string >= 0 && s[length_of_string] != ' '){
        length_of_last_word++;
        length_of_string--;
    }
    
    return length_of_last_word;
}

int main() {
    char str[] = "Hello World";
    printf("The length of the last word is: %d\n", lengthOfLastWord(str));
    return 0;
}
