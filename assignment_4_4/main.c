#include <stdio.h>

void Letter_count (char *str, int *count) {

    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i] - 97]++;
    }
}



int main() {
    char str[100];
    int count [26] = {0};
    printf("Input a string: \n");
    fgets(str, sizeof (char[100]), stdin);
    Letter_count(str, count);
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0){
            printf("'%c' : %d\n", 'a' + i, count[i]);
        }
    }
    return 0;
}
