/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 18:36:56 by aallali           #+#    #+#             */
/*   Updated: 2018/10/21 18:37:01 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int nw;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nw = n * -1;
	}
	else
		nw = n;
	if (nw > 9)
		ft_putnbr_fd(nw / 10, fd);
	ft_putchar_fd(nw % 10 + 48, fd);
}
