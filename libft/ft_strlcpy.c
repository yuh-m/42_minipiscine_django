/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 21:30:28 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/05/13 21:53:50 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len;

	if (!dest || !src)
		return (0);
	len = ft_strlen(src);
	if (n <= 0)
		return (len);
	i = 0;
	while (src[i] != '\0' && (i < (n - 1)))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
