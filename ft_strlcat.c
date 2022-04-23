/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:11:25 by kyamagis          #+#    #+#             */
/*   Updated: 2022/04/23 17:28:13 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

    srclen = ft_strlen(src);
    if (dst == NULL)
        return (srclen + dstsize);
	dstlen = ft_strlen(dst);
	if (dstlen >= dstsize)
		return (srclen + dstsize);
	if (dstsize - dstlen - 1 >= 0)
	{
		i = 0;
		while ((dstsize - dstlen - 1 > i) && (src[i] != '\0'))
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		dst[dstlen + i] = '\0';
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
    i = strlcat("6", 0, 0);
    printf("%d\n", i);
    printf("自作\n");
    printf("------------------------------\n");
    printf("------------------------------\n");
    printf("------------------------------\n");
    i = ft_strlcat("7", 0, 0);
    printf("%d\n", i);
    printf("\n");

    return (0);
}*/