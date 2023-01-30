/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:46:05 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/05/12 05:28:36 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			cnt;
	unsigned char	*src;

	cnt = 0;
	src = (unsigned char *)s;
	while (cnt < n)
	{
		if (src[cnt] == (unsigned char)c)
			return ((void *)src + cnt);
		cnt++;
	}
	return (NULL);
}
