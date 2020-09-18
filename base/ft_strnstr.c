/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casteria <mskoromec@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 00:41:42 by casteria          #+#    #+#             */
/*   Updated: 2020/05/19 18:27:51 by casteria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	length;
	size_t	index;
	size_t	max;
	size_t	i;
	size_t	haylen;

	haylen = ft_strlen(haystack);
	length = ft_strlen(needle);
	if (length == 0)
		return (char *)haystack;
	max = (haylen > n) ? n : haylen;
	index = 0;
	while (index + length <= max)
	{
		i = 0;
		while (needle[i] == ((char *)haystack)[index + i])
		{
			if (i == length - 1)
				return ((char *)(haystack + index));
			i++;
		}
		index++;
	}
	return (NULL);
}
