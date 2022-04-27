/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:54:34 by kyamagis          #+#    #+#             */
/*   Updated: 2022/04/27 10:59:19 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*prc;
	size_t	lens1;

	lens1 = ft_strlen(s1);
	prc = (char *)malloc(sizeof(char) * (lens1 + 1));
	if (prc == 0)
		return (NULL);
	ft_strlcpy(prc, s1, lens1 + 1);
	return (prc);
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