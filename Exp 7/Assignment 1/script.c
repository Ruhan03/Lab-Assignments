//WAP to create a data structer using typedef for student information with the following information

#include <stdio.h>
#include <string.h>
#define MAX_NAME_LENGTH 50
#define MAX_ADDRESS_LENGTH 100
#define NUM_SUBJECTS 5
typedef struct {
    char name[MAX_NAME_LENGTH];
    int rollNumber;
    int age;
    char address[MAX_ADDRESS_LENGTH];
    float marks[NUM_SUBJECTS];
} Student;
void readStudentInfo(Student *s) {
    printf("Enter name: ");
    scanf(" %[^\n]", s->name);
    printf("Enter roll number: ");
    scanf("%d", &s->rollNumber);
    printf("Enter age: ");
    scanf("%d", &s->age);
    printf("Enter address: ");
    scanf(" %[^\n]", s->address);
    printf("Enter marks in %d subjects: ", NUM_SUBJECTS);
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        scanf("%f", &s->marks[i]);
    }
}
void writeStudentInfo(const Student *s) {
    printf("\nStudent Information:\n");
    printf("Name: %s\n", s->name);
    printf("Roll Number: %d\n", s->rollNumber);
    printf("Age: %d\n", s->age);
    printf("Address: %s\n", s->address);
    printf("Marks in %d subjects: ", NUM_SUBJECTS);
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        printf("%.2f ", s->marks[i]);
    }
    printf("\n");
}
int main() {
    Student student;
    readStudentInfo(&student);
    writeStudentInfo(&student);
    return 0;
}