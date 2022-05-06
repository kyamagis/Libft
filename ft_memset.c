/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 21:59:55 by kyamagis          #+#    #+#             */
/*   Updated: 2022/05/06 13:09:36 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bb;
	size_t			i;

	bb = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		bb[i] = (unsigned char)c;
		i++;
	}
	return ((void *)bb);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char buf1[] = "ABCDEFGHIJK";
	char buf2[] = "ABCDEFGHIJK";
 
    memset(buf1+2,'1',3);
    printf("buf1文字列→%s\n",buf1);

	ft_memset(buf2+2,'1',3);
    printf("buf2文字列→%s\n",buf2);
}*/
