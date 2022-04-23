/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:58:46 by kyamagis          #+#    #+#             */
/*   Updated: 2022/04/05 19:52:17 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	int	flag;

	flag = 0;
	if ('0' <= c && c <= '9')
		flag = 1;
	return (flag);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_isdigit('1'));
	printf("%d", ft_isdigit('0'));
	printf("%d", ft_isdigit('a'));
	return (0);
}*/