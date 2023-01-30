/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 21:31:52 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/09/11 19:35:32 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	assign_specifier(char format, va_list ap)
{
	int	bytes;

	bytes = 0;
	if (format == '%')
		bytes += ft_print_char('%');
	else if (format == 'c')
		bytes += ft_print_char(va_arg(ap, int));
	else if (format == 's')
		bytes += ft_print_string(va_arg(ap, char *));
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

int	ft_printf(const char *format, ...)
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
			bytes += assign_specifier(*format, ap);
		}
		else
			bytes += ft_print_char(*format);
		format++;
	}
	va_end (ap);
	return (bytes);
}
