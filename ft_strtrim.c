/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:38:52 by kyamagis          #+#    #+#             */
/*   Updated: 2022/04/22 16:36:28 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_trimcpy(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	len;

	len = ft_strlen(s1);
	i = 0;
	while ((s1[i] != '\0') && (ft_strchr(set, s1[i]) != 0))
		i++;
	if (i == len)
		return (ft_strdup(""));
	j = 0;
	while ((j < len) && (ft_strchr(set, s1[len - 1 - j]) != 0))
		j++;
	return (ft_substr(s1, i, len - j - i));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	if (s1 == NULL)
		return (NULL);
	return (ft_trimcpy(s1, set));
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