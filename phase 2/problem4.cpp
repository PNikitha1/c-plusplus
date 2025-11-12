#include <iostream>
#include <cstring> 
#include <cctype>  
using namespace std;

void removing_vowels(char* str) {
    int k = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' ) {
            str[k++] = str[i];
        }
    }
    str[k] = '\0'; 
}

void reverse_string(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

void converting_to_uppercase(char* str){
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    char str[100]; 
    
    cout << "Enter the string: ";
    cin.getline(str, 100);

    converting_to_uppercase(str);
    removing_vowels(str);

    reverse_string(str);
    cout << "Modified string: " << str << endl;

    return 0;
}
