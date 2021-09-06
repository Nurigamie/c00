#include <stdio.h>

void ft_print_numbers(void)
{
	int nb = 1;
    while(nb <= 10)
    {
    printf("%u",nb);
	nb++;
    }
}

	int main(void)
{
	ft_print_numbers();
	return (0);
}

