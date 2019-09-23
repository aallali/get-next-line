/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 17:33:04 by aallali           #+#    #+#             */
/*   Updated: 2018/10/17 00:59:33 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*serc;
	int		i;

	i = 0;
	dest = (char *)dst;
	serc = (char *)src;
	while (i < (int)n)
	{
		dest[i] = serc[i];
		i++;
	}
	return (dst);
}
