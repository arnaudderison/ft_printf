/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_putnbr_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <aderison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:39:36 by arnaud            #+#    #+#             */
/*   Updated: 2024/04/11 17:38:53 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	u_nbr_len(unsigned int nb)
{
	int	len;

	len = 1;
	while (nb > 9)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

int	u_putnbr_fd(unsigned int nb, int fd)
{
	int	len;

	len = u_nbr_len(nb);
	if (nb > 9)
	{
		if (u_putnbr_fd(nb / 10, fd) < 0)
			return (-1);
	}
	if (putchar_fd(nb % 10 + '0', fd) < 0)
		return (-1);
	return (len);
}
