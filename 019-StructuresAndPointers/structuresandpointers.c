#include <stdio.h>

// Define a structure
struct Person {
    char name[50];
    int age;
};

int main() {
    // Declare and initialize a structure variable
    struct Person person1 = {"Alice", 25};

    // Declare a pointer to the structure
    struct Person *ptrPerson;

    // Assign the address of the structure variable to the pointer
    ptrPerson = &person1;

    // Access structure members using the pointer
    printf("Name: %s\n", ptrPerson->name);
    printf("Age: %d\n", ptrPerson->age);

    return 0;
}
