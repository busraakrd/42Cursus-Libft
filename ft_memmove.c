/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaraden <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:20:00 by bkaraden          #+#    #+#             */
/*   Updated: 2022/01/22 14:03:50 by bkaraden         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = dst;
	s = src;
	if (!len || dst == src)
		return (dst);
	if (d > s)
	{
		while (len-- > 0)
			*(d + len) = *(s + len);
	}
	else
	{
		while (len-- > 0)
			*(d++) = *(s++);
	}
	return (dst);
}

/*
int main(void)
{
	char str[] = "merhaba";
	ft_memmove(str + 3, str, 4);
	printf ("%s", str);
}*/
