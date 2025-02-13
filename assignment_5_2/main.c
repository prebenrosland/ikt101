#include <stdio.h>

typedef struct student_t{
    char student_id[100];
    char name[100];
    char age[3];
}student_t;

void menu();

void student_write(){
    student_t student;
    fgets(student.student_id, sizeof (char[100]), stdin);
    fgets(student.name, sizeof (char[100]), stdin);
    fgets(student.age, sizeof (char[100]), stdin);
    FILE* f = fopen("student_write.txt", "w");
    fputs(student.student_id, f);
    fputs(student.name, f);
    fputs(student.age, f);

    fclose(f);
    menu();
}

void student_read() {
    student_t student;
    FILE* f = fopen("student_read.txt", "r");
    fgets(student.student_id, sizeof (char[100]), f);
    fgets(student.name, sizeof (char[100]), f);
    fgets(student.age, sizeof (char[100]), f);

    fclose(f);
    printf("Student id: %s\n", student.student_id);
    printf("Name: %s\n", student.name);
    printf("Age: %s\n", student.age);
    menu();
}

void menu() {
    int option;
    printf("Choose 1. read, 2. write, 3. exit\n");
    scanf("%i", &option);
    getchar();
    if (option == 1){
        student_read();
    }
    else if (option == 2){
        student_write();
    }
    else {
        return;
    }
}



int main() {
    menu();
    return 0;
}
