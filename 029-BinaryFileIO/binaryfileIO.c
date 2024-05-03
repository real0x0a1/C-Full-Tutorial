#include <stdio.h>

struct Employee {
    char name[50];
    int age;
    double salary;
};

int main() {
    // Write structures to a binary file
    FILE *writeFile = fopen("employees.bin", "wb");
    if (writeFile != NULL) {
        struct Employee emp1 = {"John Doe", 30, 50000.0};
        struct Employee emp2 = {"Alice Smith", 25, 60000.0};
        fwrite(&emp1, sizeof(struct Employee), 1, writeFile);
        fwrite(&emp2, sizeof(struct Employee), 1, writeFile);
        fclose(writeFile);
    }

    // Read structures from a binary file
    FILE *readFile = fopen("employees.bin", "rb");
    if (readFile != NULL) {
        struct Employee emp;
        while (fread(&emp, sizeof(struct Employee), 1, readFile) == 1) {
            printf("Name: %s, Age: %d, Salary: %.2f\n", emp.name, emp.age, emp.salary);
        }
        fclose(readFile);
    }

    return 0;
}
