/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:54:34 by kyamagis          #+#    #+#             */
/*   Updated: 2022/04/18 13:33:15 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s1)
{
	char	*prc;

	prc = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (prc == 0)
		return (NULL);
	return (ft_strcpy(prc, s1));
}

/*#include <string.h>
#include <stdio.h>
int main(void)
{
    char *src = "hello";
    printf("%s\n", ft_strdup(src));
    printf("%s\n", strdup(src));

    char *src1 = "";
    printf("%s\n", ft_strdup(src1));
    printf("%s\n", strdup(src1));
}*/