/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:00:46 by kyamagis          #+#    #+#             */
/*   Updated: 2022/04/19 19:03:39 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*ss;

	ss = (unsigned char *)s;
	i = 0;
	while (ss[i] != '\0')
	{
		if (ss[i] == (unsigned char)c)
			return ((char *)ss + i);
		i++;
	}
	if (c == 0)
		return ((char *)ss + i);
	return (NULL);
}

/*#include <string.h>
int	main(void)
{
	const char s[] = "abcdefghij";
	int c = 'c';
	int z = 'z';

	printf("本家%s\n" ,strchr(s, c));
	printf("自作%s\n\n" ,ft_strchr(s, c));

	printf("本家%s\n" ,strchr(s, z));
	printf("自作%s\n\n" ,ft_strchr(s, z));

	printf("本家%s\n" ,strchr(s, 0));
	printf("自作%s\n\n" ,ft_strchr(s, 0));

	printf("Difference: %d\n",(int) (strchr(s,c)-ft_strchr(s,c)));
}*/
