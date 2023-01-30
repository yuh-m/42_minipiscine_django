/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 03:46:38 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/05/14 05:08:20 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	size;
	char	*result;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	size = s1_len + s2_len + 1;
	result = malloc(sizeof(char) * (size));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, s1_len + 1);
	ft_strlcat(result, s2, size);
	return (result);
}
