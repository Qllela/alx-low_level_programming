#include <stdio.h>

/**
 * main - prints numer of arguments passed to the program.
 * @argc: is a counter of argument for int.
 * @argv: is a counter for value of the argument to char
 * Return: Returns always success.
*/

int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", (argc - 1));
return (0);
}
