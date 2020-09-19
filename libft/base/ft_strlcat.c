/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casteria <mskoromec@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 23:38:17 by casteria          #+#    #+#             */
/*   Updated: 2020/05/07 15:51:21 by casteria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	index;
	size_t	size;

	index = 0;
	while (dest[index] != '\0' && index < n)
		index++;
	size = index;
	if (size == n)
		return (size + ft_strlen(src));
	while (src[index - size] && index < (n - 1))
	{
		dest[index] = src[index - size];
		index++;
	}
	if (size < n)
		dest[index] = '\0';
	return (size + ft_strlen(src));
}
