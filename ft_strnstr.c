/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:38:40 by kyamagis          #+#    #+#             */
/*   Updated: 2022/04/27 17:34:04 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	lenhay;
	size_t	lennee;

	if (haystack == NULL)
		return (NULL);
	lenhay = ft_strlen(haystack);
	lennee = ft_strlen(needle);
	if (lenhay < lennee || len < lennee)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (i + lennee <= len)
	{
		if (ft_strncmp(&haystack[i], needle, lennee) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
