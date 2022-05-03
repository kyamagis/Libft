/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:56:40 by kyamagis          #+#    #+#             */
/*   Updated: 2022/04/28 10:25:08 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*sor;

	dest = (unsigned char *)dst;
	sor = (const unsigned char *)src;
	if ((dest == NULL) && (sor == NULL))
		return (NULL);
	if (dest < sor)
		return (ft_memcpy(dst, src, len));
	else
	{
		i = 0;
		while (i < len)
		{	
			dest[len - i - 1] = sor[len - i - 1];
			i++;
		}
	}
	return ((void *)dst);
}

/*int	main(void)
{
	const char src1[] = "ABCDEFGHIJK";
	const char src2[] = "ABCDEFGHIJK";
	const char src3[] = "ABCDEFGHIJK";
	const char src4[] = "ABCDEFGHIJK";
	char dst1[] = "abcdefghij";
	char dst2[] = "abcdefghij";
	char dst3[] = "abcdefghij";
	char dst4[] = "abcdefghij";

	printf("buf1 %s\n",memmove(dst1,src1 + 2,3));
	printf("buf2 %s\n",ft_memmove(dst2,src2 + 2,3));

	printf("buf1 %s\n",memmove(0,0,3));
	printf("buf2 %s\n",ft_memmove(0,0,3));

	printf("buf1 %s\n",memmove(dst3,0,3));
	printf("buf2 %s\n",ft_memmove(dst3,0,3));

	printf("buf1 %s\n",memmove(0,src3,3));
	printf("buf2 %s\n",ft_memmove(0,src3,3));

	printf("buf1 %s\n",memmove(dst4,src4 + 2,0));
	printf("buf2 %s\n",ft_memmove(dst4,src4 + 2,0));
}*/