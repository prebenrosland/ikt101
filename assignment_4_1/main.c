#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int letters(char input[]) {
    int i = 0;
    while (input[i] != 0){
        i = i + 1;
    }
    return i-1;
}

bool is_palindrome(char input[]) {
    char reversed[100] = { 0 };
    int length = letters(input);
    bool palindrome = true;
    for (int i = 0; i < length; ++i) {
        if (input[i] != input[length - i - 1]){
            palindrome = false;
        }
    }
    if (palindrome){
        printf("The word is a palindrome\n");
    }
    else {
        printf("The word is not a palindrome\n");
    }
}

void string_reverse(char input[]) {
    char reversed[100] = { 0 };
    int length = letters(input);
    for (int i = 0; i < length; ++i) {
        reversed[i] = input[length - i - 1];
    }
    printf("The word reversed is '%s'\n", reversed);
}


int main() {
    char input[100] = { 0 };
    fgets(input, 100, stdin);
    letters(input);
    printf("The word contains %i letters\n", letters(input));
    string_reverse(input);
    is_palindrome(input);
    return 0;
}

