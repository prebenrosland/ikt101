#include <stdio.h>

typedef struct student_t{
    char student_id[100];
    char name[100];
    char age[3];
}student_t;


int main() {
    student_t student;
    printf("Student id: \n");
    fgets(student.student_id, sizeof (student_t), stdin);
    printf("Name: \n");
    fgets(student.name, sizeof (student_t), stdin);
    printf("Age: \n");
    fgets(student.age, sizeof (student_t), stdin);

    printf("Student id: %s\n", student.student_id);
    printf("Name: %s\n", student.name);
    printf("Age: %s\n", student.age);
    return 0;
}
