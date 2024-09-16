#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Asking for input
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Switch case for operations
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero.");
                return 1;
            }
            break;
        default:
            printf("Invalid operator");
            return 1;
    }

    // Display result
    printf("Result: %.2lf\n", result);
    return 0;
}
