#include <stdio.h>

struct Employee {
    char name[20];
    char gender;
    float salary;
};

int main() {
    struct Employee e[5];
    int i, male = 0, female = 0;
    float total = 0;

    // Input details
    for (i = 0; i < 5; i++) {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Gender (M/F): ");
        scanf(" %c", &e[i].gender);

        printf("Salary: ");
        scanf("%f", &e[i].salary);

        total += e[i].salary;

        if (e[i].gender == 'M' || e[i].gender == 'm')
            male++;
        else
            female++;
    }

    // a) Total employees
    printf("\nTotal Employees = %d", 5);

    // b) Male and Female count
    printf("\nMale = %d, Female = %d", male, female);

    // c) Salary > 10000
    printf("\nEmployees with salary > 10000:\n");
    for (i = 0; i < 5; i++) {
        if (e[i].salary > 10000)
            printf("%s\n", e[i].name);
    }

    return 0;
}
