/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 02:44:30 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/05/11 04:08:40 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pointer;
	size_t			cnt;

	pointer = s;
	cnt = 0;
	while (cnt < n)
	{
		pointer[cnt] = c;
		cnt++;
	}
	return (s);
}
