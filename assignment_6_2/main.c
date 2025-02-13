#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Struct used to represent a student
struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student *students = NULL;
    int count = 0;
    students = malloc(sizeof (struct Student));

    //Loop for registering and storing students
    while (1) {
        char name[50];
        printf("Enter student name, or write 'stop' to finish: ");
        fgets(name, sizeof(name), stdin);
        //Switch the newline character with end of string character
        for (int i = 0; i < 49; ++i) {
            if(name[i] == '\n'){
                name[i] = '\0';
                break;
            }
        }
        if (strcmp(name, "stop") == 0) {
            break;
        }

        int age;
        printf("Enter student age: ");
        scanf("%i", &age);

        struct Student newStudent;
        strcpy(newStudent.name, name);
        newStudent.age = age;

        students = realloc(students, (count + 1) * sizeof(struct Student));

        students[count] = newStudent;
        count++;
    }

    if (count == 0) {
        printf("No students were given\n");
    } else {
        printf("\nCount: %i\n", count/2);
        for (int i = 0; i < count; i++) {
            printf("Name = %s, Age = %i\n", students[i].name, students[i].age);
        }

        int youngest = 0;
        int oldest = 0;

        for (int i = 1; i < count; i++) {
            if (students[i].age < students[youngest].age) {
                youngest = i;
            }
            if (students[i].age > students[oldest].age) {
                oldest = i;
            }
        }

        printf("Youngest: %s\n", students[youngest].name);
        printf("Oldest: %s\n", students[oldest].name);
    }

    free(students);

    return 0;
}
