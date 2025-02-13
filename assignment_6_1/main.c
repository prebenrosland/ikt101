#include <stdio.h>
#include <stdlib.h>

int sorter(const void *xs, const void *ys){
    int x = *(int *)xs;
    int y = *(int *)ys;
    return x - y;
}
int main() {
    int *numbers;
    int count;
    printf("How many integers do you want to input? ");
    scanf("%i", &count);
    if (count < 1) {
        printf("No numbers were given\n");
        return 0;
    }
    numbers = malloc(count * sizeof(int));
    printf("Enter your integers:\n");
    for (int i = 0; i < count; i++) {
        scanf("%i", &numbers[i]);
    }
    printf("Count: %i\n", count);
    printf("Numbers: ");
    for (int i = 0; i < count; i++) {
        printf("%i ", numbers[i]);
    }
    printf("\n");
    qsort(numbers, count, sizeof(int), sorter);
    printf("Sorted: ");
    for (int i = 0; i < count; i++) {
        printf("%i ", numbers[i]);
    }
    printf("\n");
    free(numbers);
    return 0;
}
