#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float temperature;
    int choice;
    char repeat;

    do {
		
		printf("\n\n");
        printf("*** Temperature Conversion Program ***\n");
		printf("\n\n");
        printf("1. Fahrenheit to Celsius\n");
		printf("\n");
        printf("2. Celsius to Fahrenheit\n");
		printf("\n\n");
        printf("Enter your choice (1 or 2): ");
        scanf("%d", &choice);
		
		printf("\n\n");

        if (choice == 1) {
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temperature);
            printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", temperature, fahrenheitToCelsius(temperature));
        } else if (choice == 2) {
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temperature);
            printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", temperature, celsiusToFahrenheit(temperature));
        } else {
            printf("Invalid choice.\n");
        }
		
		printf("\n\n");
        printf("Do you want to convert another temperature? (y/n): ");
        scanf(" %c", &repeat);  // Note the space before %c to consume the newline character from the previous input

    } while (repeat == 'y' || repeat == 'Y');
	
	printf("\n\n");
    printf("Program exited.\n");

    return 0;
}
