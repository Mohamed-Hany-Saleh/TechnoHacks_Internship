#include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    int binary[32];
    int i = 0;

    // Convert decimal to binary
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    // Print binary representation in reverse order
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

// Function to convert decimal to octal
void decimalToOctal(int decimal) {
    int octal[32];
    int i = 0;

    // Convert decimal to octal
    while (decimal > 0) {
        octal[i] = decimal % 8;
        decimal = decimal / 8;
        i++;
    }

    // Print octal representation in reverse order
    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int decimal) {
    char hexadecimal[32];
    int i = 0;

    // Convert decimal to hexadecimal
    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hexadecimal[i] = remainder + '0';
        } else {
            hexadecimal[i] = remainder - 10 + 'A';
        }
        decimal = decimal / 16;
        i++;
    }

    // Print hexadecimal representation in reverse order
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
}

int main() {
    int decimal;
    int choice;
    char repeat;

    printf("Number Conversion Program\n");

    do {
        printf("1. Decimal to Binary\n");
        printf("2. Decimal to Octal\n");
        printf("3. Decimal to Hexadecimal\n");
        printf("Enter your choice (1, 2, or 3): ");
        scanf("%d", &choice);

        printf("Enter decimal number: ");
        scanf("%d", &decimal);

        switch (choice) {
            case 1:
                decimalToBinary(decimal);
                break;
            case 2:
                decimalToOctal(decimal);
                break;
            case 3:
                decimalToHexadecimal(decimal);
                break;
            default:
                printf("Invalid choice.\n");
        }

        printf("Do you want to perform another conversion? (y/n): ");
        scanf(" %c", &repeat);

    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}
