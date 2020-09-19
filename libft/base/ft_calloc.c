/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casteria <mskoromec@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 18:27:59 by casteria          #+#    #+#             */
/*   Updated: 2020/05/07 19:49:16 by casteria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*to_return;
	size_t			bytes;

	bytes = nmemb * size;
	if (bytes > INT_MAX)
		return (NULL);
	if (!(to_return = malloc(bytes)))
		return (NULL);
	ft_bzero(to_return, bytes);
	return (to_return);
}
