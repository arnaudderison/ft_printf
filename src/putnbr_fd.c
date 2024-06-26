/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_printf.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <aderison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:46:24 by arnaud            #+#    #+#             */
/*   Updated: 2024/04/11 17:49:57 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_int_len(int n)
{
	int				len;
	unsigned int	nb;

	len = 1;
	if (n < 0)
	{
		len++;
		nb = (unsigned int)(-n);
	}
	else
		nb = (unsigned int)(n);
	while (nb > 9)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

int	ft_putnbr_fd_printf(int nb, int fd)
{
	int				len;
	unsigned int	num;

	len = ft_int_len(nb);
	if (nb < 0)
	{
		if (putchar_fd('-', fd) < 0)
			return (-1);
		num = (unsigned int)(-nb);
	}
	else
		num = (unsigned int)(nb);
	if (num >= 10)
	{
		if (ft_putnbr_fd_printf(num / 10, fd) < 0)
			return (-1);
	}
	if (putchar_fd(num % 10 + '0', fd) < 0)
		return (-1);
	return (len);
}
