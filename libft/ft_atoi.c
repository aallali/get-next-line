/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 20:38:20 by aallali           #+#    #+#             */
/*   Updated: 2018/10/23 11:02:04 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sign(char *s, int i)
{
	int sign;

	sign = 0;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	if (sign == -1)
		return (-1);
	return (1);
}

static int	ft_skip_blanks(char *str)
{
	int i;

	i = 0;
	while (str[i] == 9 || str[i] == 10 || str[i] == 11 || str[i] == 12 ||
		str[i] == 13 || str[i] == 32)
		i++;
	return (i);
}

int			ft_atoi(const char *str)
{
	unsigned long long int	i;
	unsigned long long int	result;
	int						sign;

	i = 0;
	sign = 1;
	result = 0;
	i = ft_skip_blanks((char *)str);
	sign = ft_sign((char *)str, i);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
			return (result * sign);
		else
			result = (result * 10) + (unsigned long long int)(str[i] - '0');
		i++;
	}
	if (result > 9223372036854775807 && sign == -1)
		return (0);
	if (result > 9223372036854775807)
		return (-1);
	return (result * sign);
}
