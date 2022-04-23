/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:38:40 by kyamagis          #+#    #+#             */
/*   Updated: 2022/04/19 16:19:42 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_findstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (str[i] != '\0')
	{
		j = i;
		k = 0;
		while ((str[j] == to_find[k]) && (str[j] != '\0') && (j < n))
		{
			j++;
			k++;
		}
		if (to_find[k] == '\0')
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (ft_strlen(needle) > ft_strlen(haystack))
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	else
	{
		return (ft_findstr(haystack, needle, len));
	}
}
