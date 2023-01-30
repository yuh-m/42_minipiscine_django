/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:18:43 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/05/11 16:42:59 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	is_negative(long n)
{
	if (n >= 0)
		return (0);
	else
		return (1);
}

static long	number_digits(long n)
{
	long	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		negative_sign;
	int		digits;
	long	number;

	number = n;
	negative_sign = is_negative(number);
	if (negative_sign == 1)
		number = number * -1;
	digits = number_digits(number);
	result = (char *) malloc(digits + negative_sign + 1);
	if (result == NULL)
		return (NULL);
	if (negative_sign == 1)
		result[0] = '-';
	result[digits + negative_sign] = '\0';
	while (digits > 0)
	{
		result[(digits - 1) + negative_sign] = (number % 10) + '0';
		number = number / 10;
		digits--;
	}
	return (result);
}
