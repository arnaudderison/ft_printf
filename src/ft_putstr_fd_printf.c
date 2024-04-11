/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_printf.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <aderison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:40:51 by arnaud            #+#    #+#             */
/*   Updated: 2024/04/07 15:26:00 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putstr_fd_printf(char const *s, int fd)
{
	if (!s)
		return (write(fd, "(null)", ft_strlen_printf("(null)")));
	return (write(fd, s, ft_strlen_printf(s)));
}
