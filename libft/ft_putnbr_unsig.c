/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_puts.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 12:39:38 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/09/11 19:36:42 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_unsig(unsigned int u, int fd)
{
	if (u > 9)
		ft_putnbr_unsig(u / 10, fd);
	ft_putchar_fd(u % 10 + '0', fd);
}
