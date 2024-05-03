#include <stdio.h>

// Define a structure for a student
struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    FILE *file;
    struct Student student;

    // Writing a structure to a file
    file = fopen("students.txt", "w");
    if (file != NULL) {
        fprintf(file, "%s %d %.2f\n", "John", 20, 3.8);
        fprintf(file, "%s %d %.2f\n", "Alice", 22, 3.5);
        fclose(file);
    }

    // Reading a structure from a file
    file = fopen("students.txt", "r");
    if (file != NULL) {
        while (fscanf(file, "%s %d %f", student.name, &student.age, &student.gpa) == 3) {
            printf("Name: %s, Age: %d, GPA: %.2f\n", student.name, student.age, student.gpa);
        }
        fclose(file);
    }

    return 0;
}
