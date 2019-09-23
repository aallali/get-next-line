/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 15:19:35 by aallali           #+#    #+#             */
/*   Updated: 2018/10/23 23:41:18 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(char *s)
{
	int len;

	len = ft_strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
		len--;
	return (len);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	char	*fresh;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_len((char *)s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
		len--;
	}
	if (len <= 0)
		len = 0;
	fresh = (char *)malloc(sizeof(*s) * (len + 1));
	if (!fresh)
		return (NULL);
	s = s + i;
	i = 0;
	while (i < len)
		fresh[i++] = *s++;
	fresh[i] = '\0';
	return (fresh);
}
