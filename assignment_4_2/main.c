#include <stdio.h>
#include <string.h>

int letters(char input[]) {
    int i = 0;
    while (input[i] != 0){
        i = i + 1;
    }
    return i-1;
}

void string_upper(char input[]) {
    for (int i = 0; i < letters(input); ++i) {
        if (input[i] >= 'a' && input[i] <= 'z'){
            input[i] -= 32;
        }
    }
    input[letters(input)] = '\0';
    printf("The word in uppercase is '%s'\n", input);
}

void string_lower(char input[]) {
    for (int i = 0; i < letters(input)+1; ++i) {
        if (input[i] >= 'A' && input[i] <= 'Z'){
            input[i] += 32;
        }
    }
    printf("The word in lowercase is '%s'\n", input);
}


int main() {
    char input[100] = { 0 };
    char first[50] = { 0 };
    char last[50] = { 0 };
    fgets(input, 100, stdin);
    strncpy(first, input, letters(input)/2);
    strncpy(last, input + letters(input)/2, letters(input)/2+1);
    last[letters(last)] = '\0';
    string_upper(input);
    string_lower(input);
    printf("The word split in two is '%s - %s'\n", first, last);
    return 0;
}
