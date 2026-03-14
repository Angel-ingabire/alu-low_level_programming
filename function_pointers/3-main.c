#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point for the calculator program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 98-100 on errors
 */
int main(int argc, char *argv[])
{
    int a, b;
    int (*op_func)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        return (98);
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);

    op_func = get_op_func(argv[2]);
    if (op_func == NULL)
    {
        printf("Error\n");
        return (99);
    }

    printf("%d\n", op_func(a, b));
    return (0);
}

