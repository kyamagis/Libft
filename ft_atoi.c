/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:38:43 by kyamagis          #+#    #+#             */
/*   Updated: 2022/04/25 16:07:54 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_discrim(size_t	num, int	flag)
{
	if ((flag == 1) && (num >= (LLONG_MAX)))
		return ((int)LLONG_MAX);
	if ((flag == -1) && (1 <= ((num - 1) / LLONG_MAX)))
		return ((int)LLONG_MIN);
	return ((int)(num * flag));
}

int	ft_isspace(int c)
{
	return ((c == ' ') || (c == '\f') || (c == '\n') \
	|| (c == '\r') || (c == '\t') || (c == '\v'));
}

int	ft_atoi(const char *str)
{
	size_t	num;
	size_t	i;
	int		flag;

	flag = 1;
	num = 0;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			flag = -1;
		i++;
		if ((str[i] == '-') || (str[i] == '+'))
			return (0);
	}
	while (ft_isdigit(str[i]))
	{
		if ((flag == 1) && (num >= (ULLONG_MAX / 10)) && ((str[i] - '0') > 5))
			return ((int)LLONG_MAX);
		num = 10 * num + (str[i] - '0');
		i++;
	}
	return (ft_discrim(num, flag));
}

/*int	main(void)
{
	char	src[100] = "";
	char	src2[100] = "--1234ab567";
	char	src3[100] = "5678VtFQwLApiFWqdJEvFxp_dvsdfza";
	char	src4[100] = "abc1234";
	char	src5[100] = " +1+1234ab567";
	char	src6[100] = " -1+1234ab567";
	char	src7[100] = "+-1234ab567";
	char	src8[100] = " \f\n\r\t\v1234ab567";
	char	src9[100] = " \f\n1\r\t\v1234ab567";
	char	src10[100] = " \f\n-\r\t\v1234ab567";
	char	src11[100] = " \f\n-1\r\t\v1234ab567";
	char	src12[100] = "9223372036854775808";
	char	src13[100] = "18446744073709551616";
	char	src14[100] = "18446744073709551614";
	char	src15[100] = "9223372036854775806";
	int		i;

	i = 0;
	i = atoi(src);
	printf("本家:%d\n", i);
	i = ft_atoi(src);
	printf("自作:%d\n", i);
	printf("\n");

	i = atoi(src2);
	printf("本家:%d\n", i);
	i = ft_atoi(src2);
	printf("自作:%d\n", i);
	printf("\n");

	i = atoi(src3);
	printf("本家:%d\n", i);
	i = ft_atoi(src3);
	printf("自作:%d\n", i);
	printf("\n");
	
	i = atoi(src4);
	printf("本家:%d\n", i);
	i = ft_atoi(src4);
	printf("自作:%d\n", i);
	printf("\n");

	i = atoi(src5);
	printf("本家:%d\n", i);
	i = ft_atoi(src5);
	printf("自作:%d\n", i);
	printf("\n");

	i = atoi(src6);
	printf("本家:%d\n", i);
	i = ft_atoi(src6);
	printf("自作:%d\n", i);
	printf("\n");

	i = atoi(src7);
	printf("本家:%d\n", i);
	i = ft_atoi(src7);
	printf("自作:%d\n", i);
	printf("\n");

	i = atoi(src8);
	printf("本家:%d\n", i);
	i = ft_atoi(src8);
	printf("自作:%d\n", i);
	printf("\n");

	i = atoi(src9);
	printf("本家:%d\n", i);
	i = ft_atoi(src9);
	printf("自作:%d\n", i);
	printf("\n");

	i = atoi(src10);
	printf("本家:%d\n", i);
	i = ft_atoi(src10);
	printf("自作:%d\n", i);
	printf("\n");

	i = atoi(src11);
	printf("本家:%d\n", i);
	i = ft_atoi(src11);
	printf("自作:%d\n", i);
	printf("\n");

	i = atoi(src12);
	printf("本家:%d\n", i);
	i = ft_atoi(src12);
	printf("自作:%d\n", i);
	printf("\n");

	i = atoi(src13);
	printf("本家:%d\n", i);
	i = ft_atoi(src13);
	printf("自作:%d\n", i);
	printf("\n");

	i = atoi(src14);
	printf("本家:%d\n", i);
	i = ft_atoi(src14);
	printf("自作:%d\n", i);
	printf("\n");

	i = atoi(src15);
	printf("本家:%d\n", i);
	i = ft_atoi(src15);
	printf("自作:%d\n", i);
	printf("\n");

	return (0);
}*/