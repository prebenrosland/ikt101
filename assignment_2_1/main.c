#include <stdio.h>

int mainhjelp() {
    int tall;
    printf("Skriv inn ett tall:\n");
    scanf("%i", &tall);
    printf("jtfyutvft %i drtuiyht", tall);
    return 0;
}

int main() {
    float Preben = 4;
    int variabel = -1;
    float sum = 0;
    while (Preben != 0){
        printf("Skriv inn ett tall:\n");
        scanf("%g", &Preben);
        printf("%g\n", Preben);

        variabel += 1;
        sum += Preben;


    }
    float average = sum/variabel;
    printf("Count: %i\n", variabel);
    printf("Sum: %g\n", sum);
    printf("Average: %g\n", average);
    return 0;
}

