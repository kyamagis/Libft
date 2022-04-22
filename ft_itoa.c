/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:34:37 by kyamagis          #+#    #+#             */
/*   Updated: 2022/04/19 16:44:08 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_digcount(unsigned int	x)
{
	size_t	dig;

	if (x == 0)
		return (1);
	dig = 0;
	while (x > 0)
	{
		x /= 10;
		dig++;
	}
	return (dig);
}

unsigned char	*ft_pumi_int(size_t	digcount, unsigned char	*c, int	n)
{
	int				minus;
	unsigned int	x;

	x = n;
	minus = 0;
	if (n < 0)
	{	
		c[0] = '-';
		minus = 1;
		x = -n;
	}
	c[digcount + 1] = '\0';
	while (0 < digcount)
	{
		digcount--;
		c[digcount + minus] = '0' + x % 10;
		x /= 10;
	}
	return (c);
}

unsigned char	*ft_int_to(size_t	digcount, unsigned char	*c, int	n)
{
	if (c == 0)
		return (NULL);
	if (n == 0)
	{	
		c[0] = '0';
		c[1] = '\0';
		return (c);
	}
	return (ft_pumi_int(digcount, c, n));
}

char	*ft_itoa(int n)
{	
	unsigned int	x;
	int				minus;
	size_t			digcount;
	unsigned char	*c;

	minus = 0;
	x = n;
	if (n < 0)
	{
		minus = 1;
		x = -n ;
	}
	digcount = ft_digcount(x);
	c = (unsigned char *)malloc(sizeof(unsigned char) * (minus + digcount + 1));
	if (c == NULL)
		return (NULL);
	return ((char *)ft_int_to(digcount, c, n));
}

/*int	main(void)
{
	printf("[ 2147483647] %s\n",ft_itoa(2147483647));
	printf("[-2147483648]%s\n",ft_itoa(-2147483648));
	printf("[          0]%s\n",ft_itoa(0));
	return (0);
}*/