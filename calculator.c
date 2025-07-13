#include <stdio.h>

void add(double a, double b) {
    printf("Result: %.2f\n", a + b);
}

void subtract(double a, double b) {
    printf("Result: %.2f\n", a - b);
}

void multiply(double a, double b) {
    printf("Result: %.2f\n", a * b);
}

void divide(double a, double b) {
    if (b != 0) {
        printf("Result: %.2f\n", a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

int main() {
    int choice;
    double num1, num2;

    printf("===========================\n");
    printf("     C Calculator v1.0     \n");
    printf("   TU Berlin - 2. Semester \n");
    printf("===========================\n");

    do {
        printf("\nSelect an operation:\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n0. Exit\n> ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
        }

        switch (choice) {
            case 1:
                add(num1, num2);
                break;
            case 2:
                subtract(num1, num2);
                break;
            case 3:
                multiply(num1, num2);
                break;
            case 4:
                divide(num1, num2);
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid selection. Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}