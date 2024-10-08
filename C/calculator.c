#include <stdio.h>

void Help() {
    printf("\nHelp - Operation Guide:\n");
    printf("1: Addition (+) - Adds two numbers and gives the sum.\n");
    printf("2: Subtraction (-) - Subtracts the second number from the first.\n");
    printf("3: Multiplication (*) - Multiplies two numbers.\n");
    printf("4: Division (/) - Divides the first number by the second (ensure the second number isn't zero).\n");
    printf("5: Modulus (%) - Finds the remainder when the first number is divided by the second (for integers).\n");
    printf("Select any operation to perform or 0 to view this help again.\n\n");
}

int main() {
    int operation;
    float num1, num2, result;

    printf("Welcome To Calculator in C\n\n");

    while (1) {
        printf("Select Your Desired Operation By Typing - \n\n");
        printf("0 for Help\n");
        printf("1 for Addition (+)\n");
        printf("2 for Subtraction (-)\n");
        printf("3 for Multiplication (*)\n");
        printf("4 for Division (/)\n");
        printf("5 for Modulus (%%)\n");

        scanf("%d", &operation);

        if (operation == 0) {
            Help();
            continue;
        }

        while (operation < 1 || operation > 5) {
            printf("Invalid input. Please enter a valid number from 1 to 5:\n");
            scanf("%d", &operation);
        }

        char* operationName;
        switch (operation) {
            case 1: operationName = "Addition"; break;
            case 2: operationName = "Subtraction"; break;
            case 3: operationName = "Multiplication"; break;
            case 4: operationName = "Division"; break;
            case 5: operationName = "Modulus"; break;
        }

        printf("You Selected %s\n", operationName);
        printf("Now, Enter the first number and click enter:\n");
        scanf("%f", &num1);
        printf("Great, Now enter the second number and click enter:\n");
        scanf("%f", &num2);

        switch (operation) {
            case 1: 
                result = num1 + num2;
                printf("Result of %.2f + %.2f is = %.2f\n", num1, num2, result);
                break;
            case 2: 
                result = num1 - num2;
                printf("Result of %.2f - %.2f is = %.2f\n", num1, num2, result);
                break;
            case 3: 
                result = num1 * num2;
                printf("Result of %.2f * %.2f is = %.2f\n", num1, num2, result);
                break;
            case 4: 
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result of %.2f / %.2f is = %.2f\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero!\n");
                }
                break;
            case 5: 
                if ((int)num2 != 0) {
                    int modResult = (int)num1 % (int)num2;
                    printf("Result of %d %% %d is = %d\n", (int)num1, (int)num2, modResult);
                } else {
                    printf("Error: Modulus operation is not possible. Divisor (second number) cannot be zero.\n");
                }
                break;

        }

        break; 
    }

    return 0;
}
