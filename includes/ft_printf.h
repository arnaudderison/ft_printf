/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 08:28:38 by arnaud            #+#    #+#             */
/*   Updated: 2023/12/04 12:35:12 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *strs, ...);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char const *s, int fd);
int		ft_pointer(size_t addr);
size_t	ft_strlen(const char *str);

#endif