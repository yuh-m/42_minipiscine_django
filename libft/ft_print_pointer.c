/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:39:23 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/12/03 23:58:24 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_pointer(void *pointer)
{
	char	*base;
	char	*address;
	int		bytes;

	if (!pointer)
	{
		bytes = ft_print_string("(nil)");
		return (bytes);
	}
	bytes = ft_print_string("0x");
	base = "0123456789abcdef";
	address = ft_itoa_base((unsigned long) pointer, base);
	bytes += ft_print_string(address);
	free(address);
	return (bytes);
}

int	ft_fprint_pointer(int fd, void *pointer)
{
	char	*base;
	char	*address;
	int		bytes;

	if (!pointer)
	{
		bytes = ft_fprint_string(fd, "(nil)");
		return (bytes);
	}
	bytes = ft_fprint_string(fd, "0x");
	base = "0123456789abcdef";
	address = ft_itoa_base((unsigned long) pointer, base);
	bytes += ft_fprint_string(fd, address);
	free(address);
	return (bytes);
}
