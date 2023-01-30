/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 21:10:15 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/12/04 00:04:19 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_x(unsigned int number, char spec)
{
	int		bytes;
	char	*base;
	char	*hex;

	bytes = 0;
	if (number == 0)
		return (ft_print_string("0"));
	if (spec == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	hex = ft_itoa_base((unsigned long long) number, base);
	bytes += ft_print_string(hex);
	free(hex);
	return (bytes);
}

int	ft_fprint_x(int fd, unsigned int number, char spec)
{
	int		bytes;
	char	*base;
	char	*hex;

	bytes = 0;
	if (number == 0)
		return (ft_fprint_string(fd, "0"));
	if (spec == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	hex = ft_itoa_base((unsigned long long) number, base);
	bytes += ft_fprint_string(fd, hex);
	free(hex);
	return (bytes);
}
