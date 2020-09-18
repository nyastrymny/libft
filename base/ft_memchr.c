/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casteria <mskoromec@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 17:11:01 by casteria          #+#    #+#             */
/*   Updated: 2020/05/05 19:45:12 by casteria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	size_t			index;

	src = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		if (src[index] == (unsigned char)c)
			return ((void *)(s + index));
		index++;
	}
	return (NULL);
}
