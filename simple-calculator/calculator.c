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

		if (opt == 0)
		{
			printf("Bye!\n");
			menu == 0;
		}
		else if (opt < 0 || opt > 4)
		{
			printf("Invalid choice\n");
		}
	}
	return (0);
}
