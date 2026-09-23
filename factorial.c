#include <stdio.h>

int main() {
    int choice, a, b, i, fact = 1;
    int result = 1;

    printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Power\n6.Factorial\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 5) {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
    }
    else if (choice == 6) {
        printf("Enter a number: ");
        scanf("%d", &a);
    }

    switch (choice) {
        case 1:
            printf("Result = %d", a + b);
            break;

        case 2:
            printf("Result = %d", a - b);
            break;

        case 3:
            printf("Result = %d", a * b);
            break;

        case 4:
            printf("Result = %d", a / b);
            break;

        case 5:
            for (i = 1; i <= b; i++) {
                result = result * a;
            }
            printf("Result = %d", result);
            break;

        case 6:
            for (i = 1; i <= a; i++) {
                fact = fact * i;
            }
            printf("Factorial = %d", fact);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
``
