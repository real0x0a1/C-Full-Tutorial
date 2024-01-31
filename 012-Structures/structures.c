#include <stdio.h>

// Define a structure
struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    // Declare a structure variable
    struct Student student1;

    // Assign values to the structure members
    strcpy(student1.name, "Ali");
    student1.age = 20;
    student1.gpa = 3.8;

    // Display information
    printf("Student Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2f\n", student1.gpa);

    return 0;
}
