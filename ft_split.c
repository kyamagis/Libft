/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:25:17 by kyamagis          #+#    #+#             */
/*   Updated: 2022/05/06 14:45:53 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_countidx(char const *s, char c)
{
	size_t	i;
	size_t	idx;
	char	**strsplit;

	i = 0;
	idx = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c) && ((s[i + 1] == c) || (s[i + 1] == '\0')))
			idx++;
		i++;
	}
	strsplit = (char **)malloc(sizeof(size_t *) * (idx + 1));
	return (strsplit);
}

void	*ft_free(char	**strsplit, size_t idx)
{
	while (0 <= idx)
	{
		free(strsplit[idx]);
		idx--;
	}
	free(strsplit);
	return (NULL);
}

char	**ft_strsplit(char	**strsplit, char const *s, char c)
{
	size_t	len;
	size_t	idx;

	idx = 0;
	while (*s != '\0')
	{
		while ((*s == c) && (*s != '\0'))
			s++;
		len = 0;
		while ((*s != c) && (*s != '\0'))
		{
			s++;
			len++;
		}
		if (len != 0)
		{	
			strsplit[idx] = ft_substr(s - len, 0, len);
			if (strsplit[idx] == NULL)
				return (ft_free(strsplit, idx));
			idx++;
		}
	}
	strsplit[idx] = NULL;
	return (strsplit);
}

char	**ft_split(char const *s, char c)
{
	char	**strsplit;

	if (s == NULL)
		return (NULL);
	strsplit = ft_countidx(s, c);
	if (strsplit == NULL)
		return (NULL);
	return (ft_strsplit(strsplit, s, c));
}

/*int	main(void)
{
	char const	s0[] = "//////////hoshi/,//ichigou/sakusen/";
	char	c0 = '/';

	int i = 0;
	while (ft_split(s0, c0)[i] != '\0')
	{
		printf("%s\n", ft_split(s0, c0)[i]);
		i++;
	}
	// char const	s1[] = " hoshi , ichigou sakusen ";
	// char	c1 = ' ';
	printf("%s\n", "+++++++++++++++++++++++++++");
	char const	s2[] = "AAAAAAAAaolol";
	char	c2 = 'A';

	i = 0;
	while (ft_split(s2, c2)[i] != '\0')
	{
		printf("%s\n", ft_split(s2, c2)[i]);
		i++;
	}
	printf("%s\n", "+++++++++++++++++++++++++++");

	char const	s3[] ="      split       this for   me  !       ";
	char	c3 = ' ';

	i = 0;
	char **result = ft_split(s3,c3);
	printf("%d\n",!(!result));
	while (ft_split(s3, c3)[i] != '\0')
	{
		printf("%s\n", ft_split(s3, c3)[i]);
		i++;
	}
	printf("%s\n", ft_split(s3, c3)[i]);
	printf("%s", "+++++++++++++++++++++++++++");
}*/
