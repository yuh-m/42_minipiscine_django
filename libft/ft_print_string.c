/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 02:49:03 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/12/03 23:55:49 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_string(char *chr)
{
	int		bytes;

	bytes = 0;
	if (chr == NULL)
		chr = "(null)";
	while (*chr)
	{
		bytes += ft_print_char(*chr);
		chr++;
	}
	return (bytes);
}

int	ft_fprint_string(int fd, char *chr)
{
	int		bytes;

	bytes = 0;
	if (chr == NULL)
		chr = "(null)";
	while (*chr)
	{
		bytes += ft_fprint_char(fd, *chr);
		chr++;
	}
	return (bytes);
}
