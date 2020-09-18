/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casteria <mskoromec@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 23:23:59 by casteria          #+#    #+#             */
/*   Updated: 2020/05/13 18:12:17 by casteria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int		ft_getlength(int n)
{
	unsigned int	length;

	if (n == 0)
		return (1);
	length = 0;
	if (n < 0)
		++length;
	while (n != 0)
	{
		++length;
		n /= 10;
	}
	return (length);
}

char					*ft_itoa(int n)
{
	char				*str;
	unsigned int		length;
	size_t				index;
	char				sign;
	long long			num;

	num = (long long)n;
	sign = 0;
	length = ft_getlength(num);
	if (!(str = (char *)malloc(sizeof(char) * (length + 1))))
		return (NULL);
	index = 0;
	if (num < 0)
		sign = '-';
	num = ((num < 0) ? num * (-1) : num * 1);
	while (num >= 0 && index < length)
	{
		str[length - index - 1] = (num % 10) + '0';
		num /= 10;
		index++;
	}
	if (sign == '-')
		str[0] = '-';
	str[index] = '\0';
	return (str);
}
