/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casteria <mskoromec@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 01:39:29 by casteria          #+#    #+#             */
/*   Updated: 2020/05/13 18:18:27 by casteria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t			index;
	size_t			length;
	char			*str;

	if (s == NULL || f == NULL)
		return (NULL);
	length = ft_strlen(s);
	if (!(str = (char *)malloc(sizeof(char) * (length + 1))))
		return (NULL);
	index = 0;
	while (index < length)
	{
		str[index] = f(index, s[index]);
		index++;
	}
	str[index] = '\0';
	return (str);
}
