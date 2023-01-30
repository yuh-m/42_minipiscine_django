/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:11:54 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/05/09 10:27:35 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*dest, const char *src, size_t len)
{
	size_t			cnt_dest_len;
	size_t			cnt_src_len;

	if (src[0] == '\0')
		return ((char *)dest);
	cnt_dest_len = 0;
	while (dest[cnt_dest_len] != '\0')
	{
		cnt_src_len = 0;
		while (src[cnt_src_len] == dest[cnt_dest_len + cnt_src_len] && \
		(cnt_dest_len + cnt_src_len < len))
		{
			if (dest[cnt_dest_len + cnt_src_len] == src[cnt_src_len] && \
			src [cnt_src_len] == '\0')
				return ((char *)&dest[cnt_dest_len]);
			cnt_src_len++;
		}
		if (src[cnt_src_len] == '\0')
			return ((char *) dest + cnt_dest_len);
		cnt_dest_len++;
	}
	return (NULL);
}
