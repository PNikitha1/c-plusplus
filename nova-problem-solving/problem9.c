#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char* s) {
    int length_of_string = strlen(s);
    char temporary_string[length_of_string + 1];  
    int k = 0;

    for (int i = 0; i < length_of_string; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            temporary_string[k] = s[i] + 32;
            k++;
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            temporary_string[k] = s[i];
            k++;
        } else if (s[i] >= '0' && s[i] <= '9') {
            temporary_string[k] = s[i];
            k++;
        }
    }

    temporary_string[k] = '\0'; 

    bool palindrome = true;
    for (int i = 0; i < k / 2; i++) {
        if (temporary_string[i] != temporary_string[k - i - 1]) {
            palindrome = false;
            break;
        }
    }
    return palindrome;
}

int main() {
    char str[] = "A man, a plan, a canal: Panama";
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
