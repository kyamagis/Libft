/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:31:06 by kyamagis          #+#    #+#             */
/*   Updated: 2022/04/14 16:54:44 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	*substr;
	size_t			size_start;
	size_t			i;

	if (s == NULL)
		return (NULL);
	substr = (unsigned char *)malloc (sizeof (unsigned char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	size_start = (size_t)start;
	if (size_start >= ft_strlen(s))
		return ((char *)substr);
	i = 0;
	while (i < len)
	{
		substr[i] = s[size_start + i];
		i++;
	}
	substr[i] = '\0';
	return ((char *)substr);
}

/*char	*ft_putisnull(char const *str, size_t size)
{
	size_t	i;
	char *addr;

	addr =(char *)str;
	i = 0;
	while (i < size)
	{
		if (addr[i] == '\0')
			addr[i] = '0';
		i++;
	}
	return (addr);
}
int main(void)
{
	char const s[] = "ABCDEFGH";
	unsigned int start = 0;
	size_t len = 0;

	printf("[printsubstr]%s\n", ft_substr(s, start, len));
	printf("[exchangesub]%s\n",ft_putisnull(ft_substr(s, start, len), len + 2));
}*/
