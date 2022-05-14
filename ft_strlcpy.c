/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaraden <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 11:53:21 by bkaraden          #+#    #+#             */
/*   Updated: 2022/01/06 15:53:57 by bkaraden         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = -1;
	len = 0;
	while (src[len])
		len++;
	if (dstsize != 0)
	{
		while (++i < dstsize - 1 && src[i])
			dst[i] = src[i];
	dst[i] = '\0';
	}
	return (len);
}
