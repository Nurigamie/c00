#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar(nb);
	}
	else if (nb > 0 && nb <= 9 || nb == 0)
	{
		ft_putchar(nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
		ft_putchar(nb);
	}
}

// int	main(void)
// {
// 	ft_putnbr(42);
// 	return (0);
// }
