/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:30:01 by mbuchet           #+#    #+#             */
/*   Updated: 2021/09/11 17:31:10 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	tab[1];

	if (nb < 0)
	{
		nb = -nb;
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	nb = nb % 10;
	ft_putchar(nb + 48);
}

// int	main(void)
// {
// 	ft_putnbr(42);
// 	return (0);
// }
