/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 01:31:32 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/04/22 22:48:26 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *string)
{
	size_t		cnt;

	cnt = 0;
	while (string[cnt] != '\0')
	{
		cnt++;
	}
	return (cnt);
}
