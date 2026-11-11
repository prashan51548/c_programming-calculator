
#include <stdio.h>

// Function Declarations
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main()
{
    int choice;
    double num1, num2, result;

    do
    {
        printf("\n====================================\n");
        printf("          SMART CALCULATOR\n");
        printf("====================================\n");

        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4)
        {
            printf("Enter first number: ");
            scanf("%lf", &num1);

            printf("Enter second number: ");
            scanf("%lf", &num2);
        }

        switch (choice)
        {
            case 1:
                result = add(num1, num2);
                printf("\nResult = %.2lf\n", result);
                break;

            case 2:
                result = subtract(num1, num2);
                printf("\nResult = %.2lf\n", result);
                break;

            case 3:
                result = multiply(num1, num2);
                printf("\nResult = %.2lf\n", result);
                break;

            case 4:
                if (num2 != 0)
                {
                    result = divide(num1, num2);
                    printf("\nResult = %.2lf\n", result);
                }
                else
                {
                    printf("\nError! Division by zero is not allowed.\n");
                }
                break;

            case 5:
                printf("\nThank you for using Smart Calculator!\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}

// Function Definitions

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    return a / b;
}
