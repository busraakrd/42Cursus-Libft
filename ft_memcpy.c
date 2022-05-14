/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaraden <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:48:08 by bkaraden          #+#    #+#             */
/*   Updated: 2022/01/22 14:03:26 by bkaraden         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = dst;
	s = src;
	if (!n || src == dst)
		return (dst);
	while (n-- > 0)
	{
		*(d++) = *(s++);
	}
	return (dst);
}
