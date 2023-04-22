// Scientific Calculator program, code by Sagnik Raha
#include <stdio.h>
#include <math.h>

int main()
{
    char answer;
    int choice;
    double n1, n2, result;

    printf("\n---------- Welcome to the scientific calculator program ----------\n\n");
    do
    {
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Square root\n");
        printf("7. Factorial\n");
        printf("8. log(base 10)\n");
        printf("9. log(base e)\n");
        printf("10. Sine\n");
        printf("11. Cosine\n");
        printf("12. Tangent\n");
        printf("13. Ceil Function\n");
        printf("14. Floor Function\n");
        printf("15. Exit\n");
        printf("Enter the operation you wish to perform: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter two numbers to add: ");
            scanf("%lf %lf", &n1, &n2);
            result = n1 + n2;
            printf("Result: %lf\n", result);
            break;

        case 2:
            printf("Enter two numbers to subtract: ");
            scanf("%lf %lf", &n1, &n2);
            result = n1 - n2;
            printf("Result: %lf\n", result);
            break;

        case 3:
            printf("Enter two numbers to multiply: ");
            scanf("%lf %lf", &n1, &n2);
            result = n1 * n2;
            printf("Result: %lf\n", result);
            break;

        case 4:
            printf("Enter two numbers to divide: ");
            scanf("%lf %lf", &n1, &n2);
            if (n2 == 0)
            {
                printf("Error: Division by zero\n");
            }
            else
            {
                result = n1 / n2;
                printf("Result: %lf\n", result);
            }
            break;

        case 5:
            printf("Enter a number and its power: ");
            scanf("%lf %lf", &n1, &n2);
            result = pow(n1, n2);
            printf("Result: %lf\n", result);
            break;

        case 6:
            printf("Enter a number to find its square root: ");
            scanf("%lf", &n1);
            if (n1 < 0)
            {
                printf("Error: Cannot find square root of negative number\n");
            }
            else
            {
                result = sqrt(n1);
                printf("Result: %lf\n", result);
            }
            break;

        case 7:
            int num,fact = 1;
            printf("Enter a number to find factorial of: ");
            scanf("%d", &num);

            if (num < 0) {
                printf("Error: Factorial is not defined for negative numbers\n");
                return 1;
            }

            for (int i = 1; i <= num; i++)
            {
                fact *= i;
            }

            printf("Factorial of %d is %d\n", num, fact);
            break;

        case 8:
            double a;
            printf("Enter number to find log(base 10) value of: ");
            scanf("%lf", &a);
            if (a <= 0.0)
            {
                printf("Math Error\n");
            }
            else
            {
                result = log10(a);
                printf("Result: %lf\n", result);
            }
            break;

        case 9:
            printf("Enter a number to find log(base e) value of: ");
            scanf("%lf", &n1);
            if (n1 <= 0.0)
            {
                printf("Math Error\n");
            }
            else
            {
                result = log(n1);
                printf("Result: %lf\n", result);
            }
            break;

        case 10:
            printf("Enter angle in radians to find sine of: ");
            scanf("%lf", &n1);
            result = sin(n1);
            printf("Result:  %lf\n", result);
            break;

        case 11:
            printf("Enter angle in radians to find cosine of: ");
            scanf("%lf", &n1);
            result = cos(n1);
            printf("Result:  %lf\n", result);
            break;

        case 12:
            printf("Enter angle in radians to find tangent of: ");
            scanf("%lf", &n1);
            result = tan(n1);
            printf("Result:  %lf\n", result);
            break;
        
        case 13:
            printf("Enter a number to find ceiling value of: ");
            scanf("%lf", &n1);
            result = ceil(n1);
            printf("Ceiling integer of %.2f = %f\n", n1, result);
            break;

        case 14:
            printf("Enter a number to find floor value of: ");
            scanf("%lf", &n1);
            result = floor(n1);
            printf("Floor integer of %.2f = %f\n", n1, result);
            break;

        case 15:
            printf("Exiting calculator...\n");
            break;

        default:
            printf("Error: Invalid choice\n");
            break;
        }

        if (choice != 15)
        {
            printf("\nDo you wish to continue (y/n)? ");
            scanf(" %c", &answer);
        }
    } while (answer == 'y' || answer == 'Y');

    printf("Exiting Calculator program...\n");

    return 0;
}
//end of program