/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:27:39 by arnaud            #+#    #+#             */
/*   Updated: 2023/12/05 15:04:47 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"
#include <stdio.h>

void	main(void)
{
	int nb = 2;

	ft_printf("Le nombes est %d\n", 15);
	ft_printf("%%\n");
	ft_printf("Le nombre unsigned est %u - %u - %u\n", 15, 65535, 4294967295);
}