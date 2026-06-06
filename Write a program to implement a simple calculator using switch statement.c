//Write a program to implement a simple calculator using switch statement.

#include <stdio.h>

int main()
{
    int num1, num2;
    char op;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Input operator
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    // Perform operation using switch
    switch(op)
    {
        case '+':
            printf("Result = %d\n", num1 + num2);
            break;

        case '-':
            printf("Result = %d\n", num1 - num2);
            break;

        case '*':
            printf("Result = %d\n", num1 * num2);
            break;

        case '/':
            if(num2 != 0)
                printf("Result = %d\n", num1 / num2);
            else
                printf("Division by zero is not allowed.\n");
            break;

        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
