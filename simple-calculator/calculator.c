#include <stdio.h>

/**
 * main - menu
 *
 * Return: Always 0
 */
int main(void)
{
	int opt;
	int menu;
	int a, b, c;

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
		scanf("%d", &opt);

		switch (opt)
		{
			case 0:
				printf("Bye!\n");
				menu = 0;
				break;

			case 1:
				printf("A: ");
				scanf("%d", &a);
				printf("B: ");
				scanf("%d", &b);

				c = a + b;
				printf("Result: %d\n", c);
				break;

			case 2:
				printf("A: ");
				scanf("%d", &a);
				printf("B: ");
				scanf("%d", &b);

				c = a - b;
				printf("Result: %d\n", c);
				break;

			case 3:
				printf("A: ");
				scanf("%d", &a);
				printf("B: ");
				scanf("%d", &b);

				c = a * b;
				printf("Result: %d\n", c);
				break;

			case 4:
				printf("A: ");
				scanf("%d", &a);
				printf("B: ");
				scanf("%d", &b);

				c = a / b;
				printf("Result: %d\n", c);
				break;

			default:
				printf("Invalid choice\n");
		}
	}
	return (0);
}
