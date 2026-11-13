#include <stdio.h>

int check_int (int *num)
{
    int user_input;
    int c;
    
    user_input = scanf("%d", num);

    if (user_input != 1)
    {
        while ((c = getchar()) != '\n' && c != EOF) {}
        return (0);
    }
    return (1);
}

int main()
{
    int opt;
    int menu;
    int a, b, c;
    float d;
    
    menu = 1;
    
    printf("Simple Calculator\n");
    printf("1) Add\n");
    printf("2) Subtract\n");
    printf("3) Multiply\n");
    printf("4) Divide\n");
    printf("0) Quit\n");
    
    while (menu == 1)
    {
        printf("Choice: ");
        if (check_int(&opt) != 1)
        {
            printf("Invalid choice\n");
            continue;
        }
        
        switch (opt)
        {
            case 0:
                printf("Bye!\n");
                menu = 0;
                break;
                
            case 1:
                printf("A: ");
                if (check_int(&a) != 1)
                {
                    printf("Invalid number\n");
                    continue;
                }

                printf("B: ");
                if (check_int(&b) != 1)
                {
                    printf("Invalid number\n");
                    continue;
                }

                c = a + b;
                
                printf("Result: %d\n", c);
                break;
                
            case 2:
                printf("A: ");
                if (check_int(&a) != 1)
                {
                    printf("Invalid number\n");
                    continue;
                }
                printf("B: ");
                if (check_int(&b) != 1)
                {
                    printf("Invalid number\n");
                    continue;
                }

                c = a - b;
                
                printf("Result: %d\n", c);
                break;
                
            case 3:
                printf("A: ");
                if (check_int(&a) != 1)
                {
                    printf("Invalid number\n");
                    continue;
                }
                printf("B: ");
                if (check_int(&b) != 1)
                {
                    printf("Invalid number\n");
                    continue;
                }
                
                c = a * b;
                
                printf("Result: %d\n", c);
                break;
                
            case 4:
                printf("A: ");
                if (check_int(&a) != 1)
                {
                    printf("Invalid number\n");
                    continue;
                }
                printf("B: ");
                if (check_int(&b) != 1)
                {
                    printf("Invalid number\n");
                    continue;
                }
                
                if (a == 0 || b == 0)
                    printf("Error: division by zero\n");
                else
                {
                    d = (float)a / b;

                    printf("Result: %.2f\n", d);
                }
                break;
                
            default:
                printf("Invalid choice\n");
        }
    }
    return (0);
}