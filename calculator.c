#include <stdio.h>

int add(int i, int j) {
    return (i + j);
}

int subtract(int i, int j) {
    return (i - j);
}

int multiply(int i, int j) {
    return (i * j);
}

float divide(int i, int j) {
    if (j == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0; // Return 0 to indicate an error.
    }
    return ((float) i / j);  // Explicit type casting to float for decimal results.
}

int main() {
    int a, b;
    char operation;
    char confirm = 'n';

    do {
        printf("\nChoose an operation (+, -, *, /, ^, #, i):\n");
        printf("+: Addition\n");
        printf("-: Subtraction\n");
        printf("*: Multiplication\n");
        printf("/: Division\n");
        printf("^: Square of a number\n");
        printf("#: Cube of a number\n");
        printf("i: Inverse of a number\n");
        
        printf("Enter operation: ");
        scanf(" %c", &operation);

        switch (operation) {
            case '+':
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                printf("The result of %d + %d is %d\n", a, b, add(a, b));
                break;
            case '-':
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                printf("The result of %d - %d is %d\n", a, b, subtract(a, b));
                break;
            case '*':
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                printf("The result of %d * %d is %d\n", a, b, multiply(a, b));
                break;
            case '/':
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                if (b != 0) {
                    printf("The result of %d / %d is %.2f\n", a, b, divide(a, b));
                }
                break;
            case '^':
                printf("Enter an integer: ");
                scanf("%d", &a);
                printf("Will be implemented soon...\n");
                break;
            case '#':
                printf("Enter an integer: ");
                scanf("%d", &a);
                printf("Will be implemented soon...\n");
                break;
            case 'i':
                printf("Enter an integer: ");
                scanf("%d", &a);
                printf("Will be implemented soon...\n");
                break;
            default:
                printf("Invalid operation. Please try again.\n");
        }

        printf("Do you want to perform another operation [y/N]? ");
        scanf(" %c", &confirm);
    } while (confirm == 'y' || confirm == 'Y');

    return 0;
}
#include <stdio.h>

// Function to calculate the square of a number
int square(int num) {
    return num * num;
}

// Function to calculate the cube of a number
int cube(int num) {
    return num * num * num;
}

int main() {
    int number;
    int choice;

    // Display menu for the user
    printf("Choose the operation: \n");
    printf("1. Square\n");
    printf("2. Cube\n");
    scanf("%d", &choice);

    // Ask for the number
    printf("Enter the number: ");
    scanf("%d", &number);

    // Perform the chosen operation
    if (choice == 1) {
        printf("Square of %d is: %d\n", number, square(number));
    } else if (choice == 2) {
        printf("Cube of %d is: %d\n", number, cube(number));
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}

// Function to calculate the inverse of a number
float inverse(int num) {
    if (num == 0) {
        printf("Inverse of 0 is undefined.\n");
        return 0;  // return 0 to indicate invalid operation
    }
    return 1.0 / num;
}

int main() {
    int number;
    int choice;

    // Display menu for the user
    printf("Choose the operation: \n");
    printf("1. Square\n");
    printf("2. Cube\n");
    printf("3. Inverse\n");
    scanf("%d", &choice);

    // Ask for the number
    printf("Enter the number: ");
    scanf("%d", &number);

    // Perform the chosen operation
    if (choice == 1) {
        printf("Square of %d is: %d\n", number, square(number));
    } else if (choice == 2) {
        printf("Cube of %d is: %d\n", number, cube(number));
    } else if (choice == 3) {
        printf("Inverse of %d is: %f\n", number, inverse(number));
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}

