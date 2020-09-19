/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_matrix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casteria <casteria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 05:03:52 by casteria          #+#    #+#             */
/*   Updated: 2020/09/19 16:52:00 by casteria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_destroy_matrix(char **matrix)
{
	size_t	index;

	index = 0;
	if (matrix)
	{
		while (matrix[index])
			free(matrix[index++]);
		free(matrix);
	}
	matrix = NULL;
}
