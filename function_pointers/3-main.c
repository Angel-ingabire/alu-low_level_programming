#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(void)
{
	int a = 10, b = 5;
	char op[] = "+"; /* Proper string */
	int (*op_func)(int, int);

	op_func = get_op_func(op);
	if (op_func == NULL)
	{
		printf("Error\n");
		return (98);
	}

	printf("%d\n", op_func(a, b));
	return (0);
}

