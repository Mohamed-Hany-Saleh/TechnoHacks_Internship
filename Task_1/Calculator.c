#include <stdio.h>

// Function prototypes
float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);

int main() {
    char operation;
    float num1, num2, result;
    int repeat;

    do {
		printf("\n\n\n\n");
        printf("Enter an operation (+, -, *, /): ");
        scanf(" %c", &operation);  // Note the space before %c to consume the newline character
		printf("\n");

        printf("Enter first number: ");
        scanf("%f", &num1);
		printf("\n");
		
		printf("Enter second number: ");
        scanf("%f", &num2);
		printf("\n");

        switch(operation) {
            case '+':
                result = add(num1, num2);
                printf("Result: %.2f\n\n", result);
                break;
            case '-':
                result = subtract(num1, num2);
                printf("Result: %.2f\n\n", result);
                break;
            case '*':
                result = multiply(num1, num2);
                printf("Result: %.2f\n\n", result);
                break;
            case '/':
                if (num2 != 0) {
                    result = divide(num1, num2);
                    printf("Result: %.2f\n\n", result);
					
                } else {
                    printf("Error: Cannot divide by zero\n");
                }
                break;
            default:
                printf("Invalid operation\n\n");
        }

        printf("Do you want to perform another operation? (1 for Yes, 0 for No): ");
        scanf("%d", &repeat);
		printf("\n");

    } while (repeat == 1);

    return 0;
}

// Function definitions
float add(float num1, float num2) {
    return num1 + num2;
}

float subtract(float num1, float num2) {
    return num1 - num2;
}

float multiply(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    return num1 / num2;
}