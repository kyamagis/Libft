/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:43:41 by kyamagis          #+#    #+#             */
/*   Updated: 2022/04/09 20:46:50 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dch;
	const unsigned char	*sch;

	dch = (unsigned char *)dst;
	sch = (const unsigned char *)src;
	i = 0;
	if ((dch == 0) && (sch == 0))
	{
		return (dst);
	}
	while (i < n)
	{	
		dch[i] = sch[i];
		i++;
	}
	return (dst);
}

/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	const char src1[] = "ABCDEFGHIJK";
	const char src2[] = "ABCDEFGHIJK";
	const char src3[0] = "";
	char dst1[] = "abcdefghij";
	char dst2[] = "abcdefghij";
	char dst3[0] = "";

    printf("buf1文字列→%s\n",memcpy(dst1,src1 + 2,10));

    printf("buf2文字列→%s\n\n",ft_memcpy(dst2,src2 + 2,10));

	printf("buf1文字列→%s\n",memcpy(dst2,src2 + 2,10));

    printf("buf2文字列→%s\n\n",ft_memcpy(dst2,src2 + 2,10));
	
	//printf("buf1文字列→%s\n",memcpy(dst3,src3 ,10));

	printf("buf2文字列→%s\n",ft_memcpy(dst3,src3 ,10));
}*/
