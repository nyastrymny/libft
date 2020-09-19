/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casteria <mskoromec@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 16:05:27 by casteria          #+#    #+#             */
/*   Updated: 2020/05/18 00:05:10 by casteria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *ptr;

	if (*lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		ptr = *lst;
		*lst = ((*lst)->next);
		del(ptr->content);
		free(ptr);
	}
}
