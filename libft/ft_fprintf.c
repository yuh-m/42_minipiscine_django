/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 21:31:52 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/12/03 23:44:22 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	assign_specifier(int fd, char format, va_list ap)
{
	int	bytes;

	bytes = 0;
	if (format == '%')
		bytes += ft_fprint_char(fd, '%');
	else if (format == 'c')
		bytes += ft_fprint_char(fd, va_arg(ap, int));
	else if (format == 's')
		bytes += ft_fprint_string(fd, va_arg(ap, char *));
	else if (format == 'i' || format == 'd')
		bytes += ft_print_integer(va_arg(ap, int));
	else if (format == 'u')
		bytes += ft_print_unsigned_int(va_arg(ap, unsigned int));
	else if (format == 'p')
		bytes += ft_print_pointer(va_arg(ap, void *));
	else if (format == 'x' || format == 'X')
		bytes += ft_print_x(va_arg(ap, unsigned int), format);
	return (bytes);
}

int	ft_fprintf(int fd, const char *format, ...)
{
	va_list	ap;
	int		bytes;

	bytes = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			bytes += assign_specifier(fd, *format, ap);
		}
		else
			bytes += ft_fprint_char(fd, *format);
		format++;
	}
	va_end (ap);
	return (bytes);
}
