#include <stdio.h>
#include <stdlib.h>

int minimum(int numbers[10], int count){
    int lowest_number = numbers[0];
    for (int i = 0; i < count; ++i) {
        if (lowest_number > numbers[i]){
            lowest_number = numbers[i];
        }
    }
    printf("Minimum: %i\n", lowest_number);


}

int maximum(int numbers[10], int count){
    int highest_number = numbers[0];
    for (int i = 0; i < count; ++i) {
        if (highest_number < numbers[i]){
            highest_number = numbers[i];
        }
    }
    printf("Maximum: %i\n", highest_number);
}

int sum(int numbers[10], int count){
    int total = 0;
    for (int i = 0; i < count; ++i) {
        total = total + numbers[i];
    }
    printf("Sum: %i\n", total);
    return total;

}

int sorter(const void *xs, const void *ys){
    int x = *(int *)xs;
    int y = *(int *)ys;
    return x - y;
}

float average(int numbers[10], int count){
    float average = (float)(sum(numbers, count))/count;
    printf("Average: %g\n", average);
}

int s_numbers(int numbers[10], int count){
    qsort(numbers, count, sizeof(int), sorter);
    printf("Sorted: ");
    for (int i = 0; i < count; ++i) {
        printf("%i ", numbers[i]);
    }
    printf("\n");
}

float median(int numbers[10]){
    float median = (float)(numbers[4] + numbers[5])/2;
    printf("Median: %g\n", median);
}

int main() {

    int numbers[10];
    int count = 10;
    for (int i = 0; i < 10; ++i) {
        printf("Write a number:\n");
        scanf("%i", &numbers[i]);
    }
    minimum(numbers, count);
    maximum(numbers, count);
    sum(numbers, count);
    average(numbers, count);
    s_numbers(numbers, count);
    median(numbers);
    return 0;
}

