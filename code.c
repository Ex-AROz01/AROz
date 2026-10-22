#include <stdio.h>

int main()
{
    int num1, num2, input;

    printf("Enter two integers: ");
    if (scanf("%d %d", &num1, &num2) != 2)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Choose an operation:\n");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("5. %%\n");
    printf("Enter your choice: ");

    if (scanf("%d", &input) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    switch (input)
    {
        case 1:
            printf("The sum of %d and %d is: %d\n", num1, num2, num1 + num2);
            break;

        case 2:
            printf("The difference of %d and %d is: %d\n", num1, num2, num1 - num2);
            break;

        case 3:
            printf("The product of %d and %d is: %d\n", num1, num2, num1 * num2);
            break;

        case 4:
            if (num2 == 0)
            {
                printf("Error: division by zero.\n");
                return 1;
            }
            printf("The quotient of %d and %d is: %d\n", num1, num2, num1 / num2);
            break;

        case 5:
            if (num2 == 0)
            {
                printf("Error: modulo by zero.\n");
                return 1;
            }
            printf("The remainder of %d and %d is: %d\n", num1, num2, num1 % num2);
            break;

        default:
            printf("Invalid operator choice.\n");
            return 1;
    }

    return 0;
}
