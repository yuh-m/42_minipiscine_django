/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 00:19:33 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/05/14 22:01:21 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		diff;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] == s2[i] && (s1[i] != '\0') && (s2[i] != '\0' \
	&& (i < (n - 1)))))
		i++;
	diff = ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (diff);
}
