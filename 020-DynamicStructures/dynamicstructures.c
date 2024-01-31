#include <stdio.h>
#include <stdlib.h>

// Define a dynamic structure
struct Student {
    char *name;
    int age;
};

int main() {
    // Allocate memory for the structure
    struct Student *student1 = (struct Student *)malloc(sizeof(struct Student));

    // Allocate memory for the name string
    student1->name = (char *)malloc(50 * sizeof(char));

    // Populate the structure
    printf("Enter student name: ");
    scanf("%s", student1->name);
    printf("Enter student age: ");
    scanf("%d", &student1->age);

    // Display information
    printf("Student Name: %s\n", student1->name);
    printf("Age: %d\n", student1->age);

    // Free allocated memory
    free(student1->name);
    free(student1);

    return 0;
}
