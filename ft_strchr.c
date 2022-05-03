/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:00:46 by kyamagis          #+#    #+#             */
/*   Updated: 2022/04/27 22:04:48 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*uns;
	unsigned char	unc;

	uns = (unsigned char *)s;
	unc = (unsigned char)c;
	i = 0;
	while (uns[i] != '\0')
	{
		if (uns[i] == unc)
			return ((char *)uns + i);
		i++;
	}
	if (unc == '\0')
		return ((char *)uns + i);
	return (NULL);
}

/*#include <string.h>
int	main(void)
{
	const char s[] = "abcdefghij";
	int c = 'c';
	int z = 'z';
	printf("本家%d\n" ,!!strchr("\0", -256));
	printf("自作%d\n\n" ,!!ft_strchr("\0", -256));

	printf("本家%s\n" ,strchr(s, z));
	printf("自作%s\n\n" ,ft_strchr(s, z));

	printf("本家%s\n" ,strchr(s, 0));
	printf("自作%s\n\n" ,ft_strchr(s, 0));

	printf("Difference: %d\n",(int) (strchr(s,c)-ft_strchr(s,c)));
}*/
