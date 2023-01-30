/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 00:00:57 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/05/10 00:04:28 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	lenght;
	char	*result;

	lenght = ft_strlen(s) + 1;
	result = (char *)malloc(lenght);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s, lenght);
	return (result);
}
