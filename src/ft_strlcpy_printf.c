/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <aderison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:02:27 by arnaud            #+#    #+#             */
/*   Updated: 2024/04/07 15:12:05 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_strlcpy_printf(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	if (!dst || !src)
		return (0);
	i = -1;
	len = ft_strlen_printf(src);
	if (!size)
		return (len);
	while (++i < size - 1 && src[i])
		dst[i] = src[i];
	dst[i] = 0;
	return (len);
}
