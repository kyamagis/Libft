/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:38:52 by kyamagis          #+#    #+#             */
/*   Updated: 2022/04/27 19:40:08 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr_ull(char const *s, size_t start, size_t len)
{
	char	*substr;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) < len)
		len = ft_strlen(s) - start;
	substr = (char *)malloc (sizeof (char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, &s[start], len + 1);
	return (substr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	len = ft_strlen(s1);
	i = 0;
	while ((s1[i] != '\0') && (ft_strchr(set, s1[i]) != 0))
		i++;
	if (i == len)
		return (ft_strdup(""));
	j = 0;
	while ((j < len) && (ft_strchr(set, s1[len - 1 - j]) != 0))
		j++;
	return (ft_substr_ull(s1, i, len - j - i));
}

/*int	main(void)
{
	char const s1[] = "12ABC1223DEF123";
	char const s2[] = "";
	char const set1[] = "123";
	char const set2[] = "GET_wild";

	printf("[12A123  ]%s\n", ft_strtrim(s1, set1));
	printf("[123GET_ ]%s\n", ft_strtrim(s1, set2));
	printf("[space123]%s\n", ft_strtrim(s2, set1));
	printf("[spacesp ]%s\n", ft_strtrim(s2, s2));
	printf("[spacent,]%s\n", ft_strtrim("  \t \t \n   \n\n\n\t", " \n\t"));
	printf("[spsp    ]%s\n", ft_strtrim(s2, " \n\t"));
	printf("[]%s", s2);
}*/