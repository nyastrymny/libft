/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_list_to_array.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casteria <casteria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 16:50:48 by casteria          #+#    #+#             */
/*   Updated: 2020/09/19 17:05:52 by casteria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 			**ft_convert_list_to_array(t_list *list, char **arr)
{
	size_t		index;
	size_t		arr_size;
	t_list		*ptr;

	arr_size = ft_lstsize(list) + 1;
	arr = (char **)malloc(sizeof(char *) * arr_size);
	if (!arr)
		return (NULL);
	index = 0;
	ptr = list;
	while (index < arr_size)
	{
		arr[index] = ft_strdup(ptr->content);
		index++;
		ptr = ptr->next;
	}
	arr[index] = NULL;
	return (arr);
}
