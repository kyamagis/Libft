/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:31:32 by kyamagis          #+#    #+#             */
/*   Updated: 2022/04/19 19:22:13 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ss;
	unsigned char	c1;

	ss = (unsigned char *)s;
	c1 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ss[i] == c1)
			return ((void *)&ss[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const void *s = "abcabc";
	int c = 'c';
	int z = 'z';
	size_t n = 4;


	printf("本家%s\n" ,memchr(s, c, n));
	printf("自作%s\n\n" ,ft_memchr(s, c, n));

	printf("本家%s\n" ,memchr(s, z, n));
	printf("自作%s\n\n" ,ft_memchr(s, z, n));

	printf("本家%s\n" ,memchr(s, c, 0));
	printf("自作%s\n\n" ,ft_memchr(s, c, 0));
	
	printf("本家%s\n" ,memchr(s, z, 0));
	printf("自作%s\n\n" ,ft_memchr(s, z, 0));

	printf("本家%s\n" ,memchr(s, c, 9));
	printf("自作%s\n\n" ,ft_memchr(s, c, 9));
	
	printf("本家%s\n" ,memchr(s, z, 9));
	printf("自作%s\n\n" ,ft_memchr(s, z, 9));	
}*/