/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:28:07 by kyamagis          #+#    #+#             */
/*   Updated: 2022/04/23 16:19:40 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	if (lst == NULL)
		return (0);
	len = 0;
	while (lst != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}

/*int main(void)
{
	t_list	*s;
	t_list	*x;
	t_list	*y;
	t_list	*z;
	t_list	*null;

	s = (t_list *)malloc(sizeof(t_list));
	x = (t_list *)malloc(sizeof(t_list));
	y = (t_list *)malloc(sizeof(t_list));
	z = (t_list *)malloc(sizeof(t_list));
	null = NULL;

	s->next = x;
	x->next = y;
	y->next = z;
	z->next = NULL;
	
	printf("%d", ft_lstsize(s));
	printf("\nnull, %d", ft_lstsize(null));
}*/