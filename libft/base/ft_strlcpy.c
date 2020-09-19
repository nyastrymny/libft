/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casteria <mskoromec@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 21:17:58 by casteria          #+#    #+#             */
/*   Updated: 2020/05/07 01:29:52 by casteria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t size;

	if (src == NULL)
		return (0);
	if (n == 0)
		return (ft_strlen(src));
	size = 0;
	while (size < (n - 1) && src[size] != '\0')
	{
		dest[size] = src[size];
		size++;
	}
	if (n > 0)
		dest[size] = '\0';
	return (ft_strlen(src));
}
