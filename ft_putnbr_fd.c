/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 20:58:24 by kyamagis          #+#    #+#             */
/*   Updated: 2022/04/22 16:59:12 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dig_p(int dig, unsigned int x, int fd)
{
	char			c[10];

	dig = 0;
	while (x > 0)
	{
		c[dig] = '0' + x % 10;
		x /= 10;
		dig++;
	}
	while (dig > 0)
	{
		--dig;
		ft_putchar_fd(c[dig], fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	x;
	int				dig;

	dig = 0;
	if (n > 0)
	{	
		x = n;
		ft_dig_p(dig, x, fd);
		return ;
	}
	else if (n == 0)
	{	
		x = n;
		ft_putchar_fd('0', fd);
		return ;
	}
	else if (n < 0)
	{
		x = -n;
		ft_putchar_fd('-', fd);
		ft_dig_p(dig, x, fd);
	}
}

/*int main (void)
{
	printf("[ 2147483647]");
	ft_putnbr_fd(2147483647, 1);
	printf("\n");
	printf("[-2147483648]");
	ft_putnbr_fd(-2147483649, 1);
	printf("\n");
	printf("[          0]");
	ft_putnbr_fd(0, 1);
	return (0);
}*/