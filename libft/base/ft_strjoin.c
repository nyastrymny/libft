/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casteria <mskoromec@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 01:05:02 by casteria          #+#    #+#             */
/*   Updated: 2020/05/09 03:24:30 by casteria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*to_return;
	size_t	size;
	size_t	len1;
	size_t	len2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	size = len1 + len2;
	if (!(to_return = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_strlcpy(to_return, s1, len1 + 1);
	ft_strlcat(to_return, s2, size + 1);
	return (to_return);
}
