#include <stdio.h>
#include <string.h>


int main() {
    char word1[100], word2[100];
    printf("Enter a word: ");
    scanf("%s", word1);
    printf("Enter another word: ");
    scanf("%s", word2);
    if (strcmp(word1, word2) == 0){
        printf("The words are equal\n");
    }else{
        if (strstr(word1, word2) != NULL){
            printf("Word 2 is a substring of word 1\n");
        }else if (strstr(word2, word1) != NULL){
            printf("Word 1 is a substring of word 2\n");
        }
        else{
            printf("No substrings found\n");
        }
    }
    printf("The words are not equal\n");

    return 0;
}
