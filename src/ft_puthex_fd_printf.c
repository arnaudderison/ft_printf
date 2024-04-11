/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd_printf.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <aderison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:51:46 by arnaud            #+#    #+#             */
/*   Updated: 2024/04/11 17:38:35 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_len_hex(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb < 16)
		return (1);
	while (nb != 0)
	{
		nb /= 16;
		len++;
	}
	return (len);
}

int	ft_puthex_fd_printf(int nb, int isMaj, int fd)
{
	char			base[17];
	unsigned int	num;
	int				len;

	if (isMaj == 0)
		ft_strlcpy_printf(base, "0123456789abcdef", 17);
	else
		ft_strlcpy_printf(base, "0123456789ABCDEF", 17);
	num = (unsigned int)nb;
	len = ft_len_hex(num);
	if (num > 15)
	{
		if (ft_puthex_fd_printf(num / 16, isMaj, fd) < 0)
			return (-1);
	}
	if (ft_putchar_fd_printf(base[num % 16], fd) < 0)
		return (-1);
	return (len);
}
