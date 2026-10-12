
#include <stdio.h>

void addition(float a, float b) {
    printf("Result = %.2f\n", a + b);
}

void subtraction(float a, float b) {
    printf("Result = %.2f\n", a - b);
}

void multiplication(float a, float b) {
    printf("Result = %.2f\n", a * b);
}

void division(float a, float b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        printf("Result = %.2f\n", a / b);
    }
}

void modulus(int a, int b) {
    if (b == 0) {
        printf("Error: Modulus by zero is not allowed.\n");
    } else {
        printf("Result = %d\n", a % b);
    }
}

int main() {
    int choice, x, y;
    float a, b;

    do {
        printf("\n--- MENU-DRIVEN CALCULATOR ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }

        switch (choice) {
            case 1:
                addition(a, b);
                break;

            case 2:
                subtraction(a, b);
                break;

            case 3:
                multiplication(a, b);
                break;

            case 4:
                division(a, b);
                break;

            case 5:
                printf("Enter two integers: ");
                scanf("%d %d", &x, &y);
                modulus(x, y);
                break;

            case 6:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 6);

    return 0;
}
