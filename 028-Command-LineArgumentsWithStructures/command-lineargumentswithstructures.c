#include <stdio.h>
#include <stdlib.h>

// Define a structure for a student
struct Student {
    char name[50];
    int age;
    float gpa;
};

int main(int argc, char *argv[]) {
    if (argc != 4) {
        fprintf(stderr, "Usage: %s <name> <age> <gpa>\n", argv[0]);
        return 1;
    }

    // Create a structure and populate it with command-line arguments
    struct Student student;
    snprintf(student.name, sizeof(student.name), "%s", argv[1]);
    student.age = atoi(argv[2]);
    student.gpa = atof(argv[3]);

    // Display the student information
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);

    return 0;
}
