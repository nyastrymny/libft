/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casteria <mskoromec@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 00:04:16 by casteria          #+#    #+#             */
/*   Updated: 2020/05/06 18:42:41 by casteria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*src;
	size_t	index;

	index = 0;
	src = (char *)s;
	while (index <= ft_strlen(s))
	{
		if (src[index] == (char)c)
			return (&(src[index]));
		index++;
	}
	return (NULL);
}
