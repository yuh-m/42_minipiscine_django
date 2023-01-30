/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 00:05:12 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/12/03 23:56:19 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_unsigned_int(unsigned int number)
{
	int		bytes;

	ft_putnbr_unsig(number, 1);
	bytes = ft_len_unsigned(number);
	return (bytes);
}

int	ft_fprint_unsigned_int(int fd, unsigned int number)
{
	int		bytes;

	ft_putnbr_unsig(number, fd);
	bytes = ft_len_unsigned(number);
	return (bytes);
}
