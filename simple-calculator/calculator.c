
#include <stdio.h>

int main()
{
    int a;
    int b;
    int x;

    printf("Simple Calculator\n");

    while (1)
    {
        printf("\nEnter number 1 to 5, or 0 to exit:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("0. Exit\n");

        scanf("%d", &x);

        if (x == 0)
        {
            break;
        }

        if (x >= 1 && x <= 4)
        {
            printf("Enter number 1: ");
            scanf("%d", &a);

            printf("Enter number 2: ");
            scanf("%d", &b);
        }

        switch (x)
        {
            case 1:
                printf("Add = %d\n", a + b);
                break;

            case 2:
                printf("Subtract = %d\n", a - b);
                break;

            case 3:
                printf("Multiply = %d\n", a * b);
                break;

            case 4:
                if (b != 0)
                    printf("Divide = %.2f\n", (float)a / b);
                else
                    printf("Cannot divide by zero\n");
                break;

            default:
                printf("Invalid choice\n");
        }
    }

    printf("Bye!\n");

    return 0;
}

