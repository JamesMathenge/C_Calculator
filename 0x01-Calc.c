#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        char operator;
        double number, result;
        int equals = 0;

        printf("Enter a number: \n");
        scanf("%lf", &result);

        while (!equals)
        {
                printf("Enter an operator (+, -, *, /, =) \n");
                scanf(" %c", &operator);

                if (operator == '=')
                {
                        equals = 1;
                }
                else
                {
                        printf("Enter a number: ");
                        scanf("%lf", &number);

                        switch (operator)
                        {
                        case '+':
                                result = result + number;
                                break;
                        case '-':
                                result -= number;
                                break;
                        case '*':
                                result *= number;
                                break;
                        case '/':
                                if (number == 0)
                                {
                                        printf("Error: division by zero\n");
                                }
                                else
                                {
                                        result /= number;
                                }
                                break;
                        default:
                                printf("Error: unknown operator %c\n", operator);
                        }
                }
        }
        printf("Result: %.2lf\n", result);
        return (0);
}
