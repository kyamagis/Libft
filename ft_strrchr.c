/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:13:11 by kyamagis          #+#    #+#             */
/*   Updated: 2022/04/19 19:13:04 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			j;
	unsigned char	*ss;

	ss = (unsigned char *)s;
	j = ft_strlen(s);
	if (c == 0)
		return ((char *)ss + j);
	while (0 < j)
	{
		j--;
		if (ss[j] == (char)c)
			return ((char *)ss + j);
	}
	return (NULL);
}

/*#include <string.h>
int	main(void)
{
	const char s[] = "0abc1abc2abc";
	int c = 'c';
	int z = 'z';

	printf("本家%s\n" ,strrchr(s, c));
	printf("自作%s\n\n" ,ft_strrchr(s, c));

	printf("本家%s\n" ,strrchr(s, z));
	printf("自作%s\n\n" ,ft_strrchr(s, z));

	printf("本家%s\n" ,strrchr(s, 0));
	printf("自作%s\n\n" ,ft_strrchr(s, 0));

	printf("Difference: %d\n",(int) (strrchr(s,c)-ft_strrchr(s,c)));
	printf("Difference: %d\n",(int) (strrchr(s,z)-ft_strrchr(s,z)));
	printf("Difference: %d\n",(int) (strrchr(s,0)-ft_strrchr(s,0)));
}*/