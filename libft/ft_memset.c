/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 20:52:27 by aallali           #+#    #+#             */
/*   Updated: 2018/10/12 15:22:25 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*rs;
	char	car;
	int		n;
	int		i;

	if (len == 0)
		return (b);
	rs = b;
	car = (unsigned char)c;
	n = (int)len;
	i = 0;
	while (n)
	{
		rs[i] = car;
		n--;
		i++;
	}
	return (b);
}
