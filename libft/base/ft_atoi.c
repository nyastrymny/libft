/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casteria <mskoromec@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 21:10:40 by casteria          #+#    #+#             */
/*   Updated: 2020/05/07 16:29:40 by casteria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_space(const char *c)
{
	if (*c == '\n' || *c == '\t' || *c == '\r' || *c == '\v' ||
			*c == '\f' || *c == ' ')
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *c)
{
	int					sign;
	unsigned long long	result;

	sign = 1;
	result = 0;
	while (ft_is_space(c))
		c++;
	if (*c == '-')
		sign = -1;
	if (*c == '-' || *c == '+')
		c++;
	while (ft_isdigit(*c) != 0)
	{
		result = (unsigned long long)result * 10 + *c - '0';
		if (result * 10 < result)
			return ((sign == 1) ? -1 : 0);
		c++;
	}
	return ((int)result * sign);
}
