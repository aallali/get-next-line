/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 17:40:29 by aallali           #+#    #+#             */
/*   Updated: 2018/10/22 00:11:34 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh;
	int		i;

	i = 0;
	if (!s || (size_t)start > ft_strlen(s))
		return (NULL);
	fresh = NULL;
	fresh = ft_strnew(len);
	if (fresh == NULL)
		return (NULL);
	while (i <= (int)len && s[start])
	{
		fresh[i] = s[start];
		start++;
		i++;
	}
	fresh[len] = 0;
	return (fresh);
}
