/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:11:36 by aallali           #+#    #+#             */
/*   Updated: 2018/10/22 13:54:13 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s1_end;

	i = 0;
	while (dst[i] && i < size)
		i++;
	s1_end = i;
	if (size != 0)
	{
		while (src[i - s1_end] && i < size - 1)
		{
			dst[i] = src[i - s1_end];
			i++;
		}
		if (s1_end < size)
			dst[i] = '\0';
	}
	return (s1_end + ft_strlen((char *)src));
}
