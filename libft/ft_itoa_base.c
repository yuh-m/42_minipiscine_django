/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 17:36:00 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/09/11 18:59:13 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	int_in_base_len(unsigned long long number, char *base)
{
	size_t			len;
	unsigned long	baselen;

	len = 1;
	baselen = ft_strlen(base);
	while (number >= baselen)
	{
		number = number / baselen;
		len++;
	}
	return (len);
}

char	*ft_itoa_base(unsigned long long number, char *base)
{
	char	*result;
	int		i;
	int		base_size;

	base_size = ft_strlen(base);
	i = int_in_base_len(number, base);
	result = (char *) malloc(i + 1);
	if (!result)
		return (NULL);
	result[i] = '\0';
	while (i > 0)
	{
		i--;
		result[i] = base[number % base_size];
		number = number / base_size;
	}
	return (result);
}
