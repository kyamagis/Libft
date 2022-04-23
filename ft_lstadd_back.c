/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:46:08 by kyamagis          #+#    #+#             */
/*   Updated: 2022/04/23 16:18:48 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if ((lst == NULL) || (new == NULL))
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
	new->next = NULL;
}

/*int main(void)
{
	t_list **lst;
	t_list *new;
	t_list *x;
	t_list *y;

	new = (t_list *)malloc(sizeof(t_list));
	x = (t_list *)malloc(sizeof(t_list));
	y = (t_list *)malloc(sizeof(t_list));
	lst = (t_list **)malloc(sizeof(t_list));
	*lst = (t_list *)malloc(sizeof(t_list));
	new->content = "try";
	new->next = x;
	(*lst)->content = "touch down";
	(*lst)->next = y;
	printf("[newcontent]%s\n", (char *)new->content);
	printf("[newnext   ]%d\n", !!(char *)new->next);
	printf("[lstcontent]%s\n", (char *)(*lst)->content);
	printf("[lstnext   ]%d\n", !!(char *)(*lst)->next);
	printf("\n");
	ft_lstadd_back(lst, new);
	printf("[lstcontent]%s\n", (char *)(*lst)->content);
	printf("[lstnext   ]%d\n", !!(char *)(*lst)->next);
	printf("[newnext   ]%d\n", !!(char *)new->next);
}*/