/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casteria <mskoromec@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 00:16:53 by casteria          #+#    #+#             */
/*   Updated: 2020/05/06 18:41:46 by casteria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*buffer;
	char	*src;
	size_t	index;

	src = (char *)s;
	index = 0;
	buffer = NULL;
	while (index < ft_strlen(s) + 1)
	{
		if (src[index] == (char)c)
			buffer = &(src[index]);
		index++;
	}
	return (buffer);
}
