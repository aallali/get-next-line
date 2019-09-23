/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 21:07:19 by aallali           #+#    #+#             */
/*   Updated: 2018/10/23 23:09:19 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *dst, char const *src)
{
	char			*new;
	size_t			len_dst;
	size_t			len_src;
	register size_t	i;

	if (!src)
		return (NULL);
	len_dst = (dst ? ft_strlen(dst) : 0);
	len_src = ft_strlen(src);
	if (!(new = (char *)malloc((len_dst + len_src + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (i < len_dst)
	{
		new[i] = dst[i];
		++i;
	}
	while (i < len_dst + len_src)
	{
		new[i] = src[i - len_dst];
		++i;
	}
	new[i] = '\0';
	return (new);
}
