/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casteria <mskoromec@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 19:55:47 by casteria          #+#    #+#             */
/*   Updated: 2020/05/08 01:18:02 by casteria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*to_return;
	size_t	length;

	length = ft_strlen(s);
	if (!(to_return = (char *)malloc(sizeof(char) * length + 1)))
		return (NULL);
	ft_strlcpy(to_return, s, length + 1);
	return (to_return);
}
