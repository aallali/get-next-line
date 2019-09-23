/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 22:19:42 by aallali           #+#    #+#             */
/*   Updated: 2018/10/17 12:43:26 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *saver;

	saver = (char *)malloc(sizeof(char) * len);
	if (saver == NULL)
		return (dst);
	ft_memcpy(saver, src, len);
	ft_memcpy(dst, saver, len);
	free(saver);
	return (dst);
}
