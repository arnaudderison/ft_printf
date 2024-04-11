/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderison <aderison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 08:28:38 by arnaud            #+#    #+#             */
/*   Updated: 2024/04/11 17:50:15 by aderison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *strs, ...);
int		putchar_fd(char c, int fd);
int		ft_putstr_fd_printf(char const *s, int fd);
int		pointer(size_t addr);
size_t	strlen(const char *str);
int		ft_putnbr_fd_printf(int nb, int fd);
int		u_putnbr_fd(unsigned int nb, int fd);
size_t	strlcpy(char *dst, const char *src, size_t size);
int		ft_puthex_fd_printf(int nb, int isMaj, int fd);

#endif