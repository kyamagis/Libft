/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 18:47:07 by kyamagis          #+#    #+#             */
/*   Updated: 2022/05/10 17:59:00 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*lsttail;
	t_list	*tmp;

	if (lst == NULL || f == NULL)
		return (NULL);
	newlst = NULL;
	lsttail = NULL;
	while (lst != NULL)
	{
		tmp = ft_lstnew(f(lst->content));
		if (tmp == NULL)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		lsttail -> next = tmp;
		lsttail = lsttail -> next;
		lst = lst->next;
	}
	return (newlst);
}

/*void	ft_putstr(void *s)
{
	int	i;

	if (s == NULL)
		return ;
	i = 0;
	while (s)
	{
		write (1, &s[i], 1);
		i++;
	}
}
void	*f(void *b)
{
	unsigned char	*bb;
	size_t			i;

	bb = (unsigned char *)b;
	i = 0;
	while (bb != '\0')
	{
		bb[i] = '0';
		bb++;
	}
	return (bb);
}
int main(void)
{
	printf("6\n");
	t_list *lst;
	char s[] = "000";
	printf("6\n");
	//printf("6%s", ft_mem(s));
	ft_lstmap(lst, f, ft_putstr);
}*/