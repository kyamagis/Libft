/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:56:40 by kyamagis          #+#    #+#             */
/*   Updated: 2022/05/06 16:32:47 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*sor;

	dest = (unsigned char *)dst;
	sor = (const unsigned char *)src;
	if ((dest == NULL) && (sor == NULL))
		return (NULL);
	if (dest < sor)
		return (ft_memcpy(dst, src, len));
	while (0 < len--)
		dest[len] = sor[len];
	return ((void *)dst);
}

/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	const char src1[] = "ABCDEFGHIJK";
	const char src2[] = "ABCDEFGHIJK";
	char dst1[] = "abcdefghij";
	char dst2[] = "abcdefghij";

    printf("buf1文字列→%s\n",memmove(dst1,src1 + 2,3));

    printf("buf2文字列→%s\n",ft_memmove(dst2,src2 + 2,3));

	printf("buf1文字列→%s\n",memmove(0,0,3));
	printf("buf2文字列→%s\n",ft_memmove(0,0,3));
}*/