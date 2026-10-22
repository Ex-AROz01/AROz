#include <stdio.h>

int main()
{
    printf("Enter two integers: ");
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int input;
    printf("There are five arithmetic operators: '+' => 1,'-'=>' 2,'*'=>' 3,'/'=>' 4,'%%'=>' 5\n");
    scanf("%d", &input);
    if (input == 1)
    {
        int sum = num1 + num2;
        printf("The sum of %d and %d is: %d\n", num1, num2, sum);
        return 0;
    }
    if (input == 2)
    {
        int sum = num1 - num2;
        printf("The difference of %d and %d is: %d\n", num1, num2, sum);
        return 0;
    }
    if (input == 3)
    {
        int sum = num1 * num2;
        printf("The product of %d and %d is: %d\n", num1, num2, sum);
        return 0;
    }
    if (input == 4)
    {
        int sum = num1 / num2;
        printf("The quotient of %d and %d is: %d\n", num1, num2, sum);
        return 0;
    }
    if (input == 5)
    {
        int sum = num1 % num2;
        printf("The remainder of %d and %d is: %d\n", num1, num2, sum);
        return 0;
    }

    return 0;
}
