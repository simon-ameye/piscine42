#include <stdio.h>
#include <stdlib.h>

int ft_iterative_factorial(int nb);

int main (int argc, char **argv)
{
	if (argc == 2)
		printf("%i", ft_iterative_factorial(atoi(argv[1])));
}
