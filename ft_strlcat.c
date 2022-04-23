/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:11:25 by kyamagis          #+#    #+#             */
/*   Updated: 2022/04/22 17:28:10 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen >= dstsize)
		return (srclen + dstsize);
	if (dstsize - dstlen - 1 >= 0)
	{
		j = 0;
		while ((dstsize - dstlen - 1 > j) && (src[j] != '\0'))
		{
			dst[dstlen + j] = src[j];
			j++;
		}
		dst[dstlen + j] = '\0';
		return (dstlen + srclen);
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int    main(void)
{
    char    dest[1024];
    char    dest2[1024];
    char    src[100] = "qJxqmoQXo_rfaerf";
    char    src2[100] = "WXVfadcfuJkx_rgae";
    char    src3[100] = "VtFQwLApiFWqdJEvFxp_dvsdfza";
    char    src4[100] = "abc";
    int        i;
    int        n;

    i = 0;
    n = 10;
    printf("src\n");
    printf("本家\n");
    i = strlcat(dest2, src, n);
    printf("%d\n", i);
    printf("%s\n", dest2);
    printf("自作\n");
    i = ft_strlcat(dest, src, n);
    printf("%d\n", i);
    printf("%s\n", dest);
    printf("\n");

    n = 10;
    printf("src2\n");
    printf("本家\n");
    i = strlcat(dest2, src2, n);
    printf("%d\n", i);
    printf("%s\n", dest2);
    printf("自作\n");
    i = ft_strlcat(dest, src2, n);
    printf("%d\n", i);
    printf("%s\n", dest);
    printf("\n");

    n = 100;
    printf("src3\n");
    printf("本家\n");
    i = strlcat(dest2, src3, n);
    printf("%d\n", i);
    printf("%s\n", dest2);
    printf("自作\n");
    i = ft_strlcat(dest, src3, n);
    printf("%d\n", i);
    printf("%s\n", dest);
    printf("\n");

    n = 10;
    printf("src4\n");
    printf("本家\n");
    i = strlcat(dest2, src4, n);
    printf("%d\n", i);
    printf("%s\n", dest2);
    printf("自作\n");
    i = ft_strlcat(dest, src4, n);
    printf("%d\n", i);
    printf("%s\n", dest);
    printf("\n");

    return (0);
}*/